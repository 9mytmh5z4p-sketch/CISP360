# p360 Lectures — Claude Project Context

## How to Start a Build Session

Tell Claude: **"Build lecture p360_lecture_XX.YY"**

Claude will:
1. Read `lessons.csv` and `inventory.csv` from this folder (`p360 Lectures/`)
2. Read `assets/topics.md` from the working lecture subfolder
3. Check the working subfolder for any PDF files of prior slides — if found, use them to match voice, phrasing, and slide structure; if not, rely on `lessons.csv` and flag the absence
4. Proceed with topic ordering and generation

**Scope:** Read `lessons.csv` and `inventory.csv` from the parent folder. Read and write only within the specified working subfolder. Do not touch any other folder.

---

## Project Structure

Each lecture lives in its own flat subfolder. All files sit at the same level — no `topics/` subfolder.

```
p360_lecture_XX.YY/
  p360_lecture_XX.YY.qmd   ← stitched lecture (main render target)
  topic_1_keyword.qmd       ← one file per topic, flat alongside main
  topic_2_keyword.qmd
  ...
  assets/
    topics.md               ← topic planning table (input, provided by instructor)
  images/                   ← images referenced in slides
  cpp/                      ← standalone .cpp example files
  render_only.sh / .command
  render_and_push.sh / .command
```

Shared project files at `p360 Lectures/` root — do not copy or modify per-lecture:
- `_quarto.yml` — shared Quarto format, filters, engine settings
- `styles/styles.css` — shared CSS
- `plantuml-filter.lua` — centralized Lua filter (referenced by `_quarto.yml`)
- `inventory.csv` — append-only topic tracking across all lectures
- `lessons.csv` — session lessons, added with instructor approval

---

## Filename Convention

- `0x` = zero-padded week number (e.g., `09`)
- `0y` = lecture number within the week, always `01` or `02`
- Example: `p360_lecture_09.01` = Week 9, first lecture

---

## Topic Ordering

1. Read `assets/topics.md`. Suggest an ordering and briefly explain the rationale.
2. Flag any topics that are missing, should be split, or overlap with prior lectures (check `inventory.csv`).
3. Wait for instructor approval before generating anything.

Ask clarifying questions **one at a time** and wait for each answer before asking the next. Stop when you have enough to proceed.

---

## File Generation

For each approved topic, generate a separate `.qmd` file:
- **Filename:** `topic_x_keyword_keyword.qmd` — `x` is the topic number; keywords are 2–3 words from the topic name joined by underscores (e.g., `topic_1_for_loop.qmd`, `topic_2_global_variables.qmd`)
- **Location:** working subfolder root (flat, alongside the main lecture file)

After all topic files are generated, stitch them into a main lecture file:
- **Filename:** `p360_lecture_0x.0y.qmd`
- **Location:** working subfolder root
- The stitched file has **no slide count**

---

## C++ Code Style

All running code examples use the following style:

- `using namespace std;` — always present; never prefix standard library names with `std::`
- Function prototypes — declare all functions above `main`; define them below
- Inline comments — plain English, no dot-padding (`//..........`), no step numbers

## Slide Rules

- Use **Quarto Markdown** with Reveal.js slide syntax (`---` as slide separator)
- Use only `#` (h1) and `##` (h2) headers
- Tone: professional, concise, direct. No emojis.
- No filler phrases. Say what needs to be said and stop.
- Lists: no more than two sentences per item
- Text per slide: no more than three short paragraphs
- Do **not** put programming exercises or common mistakes in the main slide content
- If you have a best practices slide, title it **"Common Practices"**
- Let content dictate slide count — don't pad, don't compress. Use `emphasis` and `time_budget` from `topics.md` to calibrate depth.

**Per topic file:**
- First slide: one introductory slide — preferably a question the section will answer. Max 3 sentences.
  - Speaker notes on first slide: total slide count for this topic
- Last slide: a brief summary of the key point. Max 2 sentences.
- Where a drawing or graphic would help, note it in speaker notes only:
  ```
  ::: notes
  [Graphic suggestion: describe what would go here]
  :::
  ```
- Speaker notes (`:::notes ... :::`) go at the bottom of the slide, after all content and before the `<!-- Slide N -->` comment.
- At the bottom of each slide, add an HTML comment with the slide number:
  ```
  <!-- Slide 3 -->
  ```

---

## Appendix

The appendix lives in the **stitched lecture file**, not in individual topic files. After `# Next Time`, add one sub-section per topic. Each sub-section gets its own set of slides covering:
- Good Practices
- Common Mistakes
- More Examples
- Practice Problems
- AI Search Terms
- Questions for Reflection

---

## topics.md Template

Place in `assets/topics.md` within the working subfolder. The instructor fills this in before starting a build session.

```markdown
---
# Topics — p360_lecture_XX.YY
---

| Topic | Emphasis | Time Budget | Optional | Prerequisites | Tone Flag | Note |
|-------|----------|-------------|----------|---------------|-----------|------|
| Topic Name | high | 10 | no | | | |

---

## Field Guide

| Field | Notes |
|-------|-------|
| **Topic** | Name of the topic to cover |
| **Emphasis** | Leave blank for standard depth. Note extra depth if needed, e.g. "students struggle with this" |
| **Time Budget** | Rough target in minutes, e.g. "10 min". Leave blank to let content dictate |
| **Optional** | yes = cut if running short. Leave blank = required |
| **Prerequisites** | Topic or lecture number students need first. Leave blank if none |
| **Tone Flag** | Framing notes, e.g. "students find this intimidating — be encouraging" |
| **Note** | Notes to myself regarding this topic |
```

---

## Topic File Template

```markdown
<!-- Topic N: Topic Name Here -->
<!-- Total slides: N -->

# Topic Name Here

---

## Opening Question or Title {.smaller}

Brief intro — preferably a question the section will answer. Max 3 sentences.

::: notes
Total slides: N
:::

<!-- Slide 1 -->

---

## Slide Title

Content here.

<!-- Slide 2 -->

---

## Summary

One or two sentences capturing the key takeaway.

<!-- Slide N -->
```

---

## Stitched Lecture Front Matter

The main `p360_lecture_0x.0y.qmd` has no YAML frontmatter — all settings come from `_quarto.yml`. Version tracking is maintained in `_quarto.yml`, not in individual lecture files.

```markdown
# Last Time

::: {.incremental}
+ **Topic 1**
+ **Topic 2**
+ **Topic 3**
:::

::: notes
[Brief recall notes]
:::

---

# Today's Agenda

- Topic 1
- Topic 2
- ...

::: notes

:::

{{< include topic_1_keyword.qmd >}}
{{< include topic_2_keyword.qmd >}}
...

---

# Key Takeaways

- Takeaway 1
- Takeaway 2

---

# Next Time

---

# Appendix

---

## [Topic 1 Name]: Good Practices

---

## [Topic 1 Name]: Common Mistakes

---

## [Topic 1 Name]: More Examples

---

## [Topic 1 Name]: Practice Problems

---

## [Topic 1 Name]: AI Search Terms

---

## [Topic 1 Name]: Questions for Reflection

---

## [Topic 2 Name]: Good Practices

<!-- repeat pattern for each topic -->
```

---

## CriticGPT Review

After generating all topic files:
1. Create `critic.md` in the working subfolder
2. Have CriticGPT review all topic files and write structured feedback in `critic.md`
3. Discuss the feedback with the instructor. Update topic files if warranted.
4. Do not ask the instructor before proceeding with the review — run it automatically.
5. **Delete `critic.md` when the review is complete and no further changes are needed.**

**CriticGPT must check for blank slides.** A blank slide is created when two `---` separators have only HTML comments between them (comments are invisible to Reveal.js, leaving an empty slide). The topic file template avoids this by placing HTML comments at the top of the `#` section rather than between separators. Flag any file where `---` appears immediately before or after a block of HTML comment lines with no real content between them.

---

## Post-Generation: Update index.html

Update `index.html` in this folder to reflect the completed lecture.

- Find the `<li>` entry whose `href` matches the lecture just built (e.g., `p360_lecture_09.01/p360_lecture_09.01.html`)
- Fill in the link text with the week, lecture number, and a short title derived from the lecture content — format: `Week X, Lecture 0Y – [Short Title]`
- If no entry exists for this lecture yet, add it in the correct week position, following the existing list pattern
- If it is the first lecture for a new week/theme, add a `<h4>` section header `<li>` above it — ask the instructor for the section title first
- Do **not** change any other entries

---

## Post-Generation: Update inventory.csv

Append one row per topic to `inventory.csv` in this folder. Do not overwrite existing rows.

```
lecture, week, section, topic, emphasis, time_budget, optional, notes
```

---

## Post-Generation: Update lessons.csv

Propose additions **one at a time** and wait for instructor approval before writing anything.

```
date, lecture, category, lesson, applied
```

Categories: *voice*, *structure*, *slide length*, *Quarto syntax*, *tone*, *emphasis*, *pacing*
`applied` = whether this lesson has been used in a subsequent lecture (default: `no`)

---

## Output Summary

| File | Location |
|------|----------|
| `topic_x_keyword.qmd` (one per topic) | `[working subfolder]/` |
| `p360_lecture_0x.0y.qmd` (stitched) | `[working subfolder]/` |
| `index.html` (update link text) | `p360 Lectures/` |
| `inventory.csv` (append only) | `p360 Lectures/` |
| `lessons.csv` (with approval) | `p360 Lectures/` |
