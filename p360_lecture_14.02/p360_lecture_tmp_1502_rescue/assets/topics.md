---
# Topics — p360_lecture_15.02
---

| Topic | Emphasis | Time Budget | Optional | Prerequisites | Tone Flag | Note |
|-------|----------|-------------|----------|---------------|-----------|------|
| What's the Output? | standard | 10 | no | 15.01 | | Two exercises on new/delete/pointer mechanics. Opens the lecture — gets students thinking before new content. |
| Memory Leaks | high | 10 | no | 15.01 | Students underestimate how silent and serious leaks are — be direct about the stakes. | What a leak is, why it produces no error, the ownership question: who is responsible for calling delete? |
| Dangling Pointers After delete | high | 8 | no | Memory Leaks | | Use-after-free behavior, why it's undefined, set pointer to nullptr after delete as discipline. |
| Smart Pointers Callback | standard | 5 | no | 13.02 | Students have seen unique_ptr and shared_ptr — this is a one-slide bridge, not a re-teach. | unique_ptr and shared_ptr solve the ownership problem. RAII: destructor calls delete automatically. |
| Fill In the Missing Code | standard | 8 | no | new and delete | | First exercise. ~35 lines. Students fill in a contiguous block of missing lines — not scattered gaps. Topic: scalar new/delete with error checking. |
| Fill In the Missing Code | standard | 8 | no | Dynamic Arrays | | Second exercise. ~35 lines. Students fill in a contiguous block. Topic: dynamic array allocation, population, and cleanup. |
| Programming Task — Parallel Dynamic Arrays | standard | 13 | no | Dynamic Arrays | End the lecture with a task that requires students to manage two heap-allocated arrays together. | Allocate two parallel dynamic arrays (e.g. names + scores), populate from user input, compute a result, then delete[] both. No smart pointers — raw ownership practice. |

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
