# Topics — p360_lecture_13.01

| Topic | Emphasis | Time Budget | Optional | Prerequisites | Tone Flag | Note |
|-------|----------|-------------|----------|---------------|-----------|------|
| Closer Look — Arrays & Memory | | 8 | | 12.01 arrays | | Visualization bridge — how an array occupies contiguous memory; what an address is |
| The Address Operator | | 8 | | Closer Look — Arrays & Memory | | 10.1 — & to get a variable's address; printing addresses with cout |
| Pointer Variables | high | 10 | | The Address Operator | students find this confusing — be concrete and slow | 10.2 — declaring with *, assigning an address, dereferencing |
| Array-Pointer Relationship | | 8 | | Pointer Variables | | 10.3 — array name decays to pointer; arr == &arr[0]; traversal equivalence |
| Pointer Arithmetic | | 8 | | Array-Pointer Relationship | | 10.4 — ptr++ advances one element; traversing an array with a pointer |
| Initializing Pointers | | 6 | | Pointer Variables | | 10.5 — nullptr; always initialize; wild and dangling pointers |
| Comparing Pointers | | 5 | | Pointer Arithmetic | | 10.6 — <, >, == on addresses; range-check traversal pattern |
| VLAs & G++ | | 5 | yes | Arrays | | 8.x — runtime-sized stack arrays as GCC extension; non-standard; contrast with vector |

---

## Field Guide

| Field | Notes |
|-------|-------|
| **Topic** | Name of the topic to cover |
| **Emphasis** | Leave blank for standard depth. Note extra depth if needed |
| **Time Budget** | Rough target in minutes |
| **Optional** | yes = cut if running short. Leave blank = required |
| **Prerequisites** | Topic or lecture number students need first |
| **Tone Flag** | Framing notes |
| **Note** | Notes to myself regarding this topic |
