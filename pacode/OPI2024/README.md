# 🏆 OPI 2024 — Accepted Solutions

<div align="center">

**Complete C++17 solution set for the OPI 2024 problem collection.**

[![Problems](https://img.shields.io/badge/problems-10-2563eb?style=for-the-badge)](#-problem-set)
[![Accepted](https://img.shields.io/badge/judge-10%2F10%20accepted-22c55e?style=for-the-badge)](#-results)
[![Language](https://img.shields.io/badge/language-C%2B%2B17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](#%EF%B8%8F-build-and-run)

Official statements, accepted implementations, and a progression from introductory observations to advanced competitive-programming techniques.

</div>

---

## 📌 Overview

This directory contains my solutions for all ten OPI 2024 problems, from **A** through **J**. Every solution was submitted to the online judge and received an **Accepted** verdict.

The collection covers a broad range of topics:

- greedy algorithms and custom sorting;
- frequency counting and game invariants;
- modular arithmetic and fast exponentiation;
- dominance filtering and candidate hulls;
- number-theoretic transforms;
- constructive algorithms;
- graph traversal and bipartite coloring;
- dynamic programming with compact states.

Each problem is represented by two independent files:

- `839292-X.pdf` — the official problem statement;
- `X.cpp` — the accepted C++ implementation.

## ✅ Results

| Metric | Result |
| --- | ---: |
| Problems attempted | 10 |
| Problems accepted | 10 |
| Completion | **100%** |
| Language | C++17 / GNU C++17 |

> [!IMPORTANT]
> The accepted status refers to successful evaluation by the online judge, not only local compilation.

## 🧩 Problem set

| ID | Problem | Main technique | Statement | Solution | Verdict |
| :-: | --- | --- | :-: | :-: | :-: |
| A | Cards | Greedy selection and concatenation ordering | [PDF](839292-A.pdf) | [Code](A.cpp) | ✅ Accepted |
| B | Number of Digits | Repeated division and base representation | [PDF](839292-B.pdf) | [Code](B.cpp) | ✅ Accepted |
| C | Voting | Frequency counting and lexicographical sorting | [PDF](839292-C.pdf) | [Code](C.cpp) | ✅ Accepted |
| D | Game | Parity invariant | [PDF](839292-D.pdf) | [Code](D.cpp) | ✅ Accepted |
| E | Equation | Modular inverse, fast exponentiation, and periodic counting | [PDF](839292-E.pdf) | [Code](E.cpp) | ✅ Accepted |
| F | — | Dominance filtering and intersection-based candidate hull | [PDF](839292-F.pdf) | [Code](F.cpp) | ✅ Accepted |
| G | — | NTT string matching and disjoint-set union | [PDF](839292-G.pdf) | [Code](G.cpp) | ✅ Accepted |
| H | — | Constructive matrix algorithm with parity constraints | [PDF](839292-H.pdf) | [Code](H.cpp) | ✅ Accepted |
| I | — | Tree bipartition with breadth-first search | [PDF](839292-I.pdf) | [Code](I.cpp) | ✅ Accepted |
| J | — | Dynamic programming over column states | [PDF](839292-J.pdf) | [Code](J.cpp) | ✅ Accepted |

## 🔍 Technique highlights

### Greedy and ordering

Problem A demonstrates how a custom comparator can optimize concatenated values. Problem F goes further by removing dominated candidates and maintaining only the relevant intersection hull.

### Modular arithmetic

Problem E uses binary exponentiation, Fermat's little theorem, modular inverses, residue classes, and periodicity to count valid values efficiently.

### Fast string matching

Problem G uses the number-theoretic transform under modulus `998244353` to process character alignments efficiently. A compact DSU then determines the number of required character-group merges.

### Graphs and dynamic programming

Problem I colors a tree with BFS and uses the sizes of its bipartite partitions. Problem J models each column with one of four states and propagates component counts through dynamic programming.

### Exact arithmetic

Problem F uses `__int128` for cross-product comparisons. This avoids floating-point precision errors and overflow while comparing rational intersection points.

## 🗂️ Directory structure

```text
OPI2024/
├── 839292-A.pdf ... 839292-J.pdf  # Official statements
├── A.cpp ... J.cpp                # Accepted C++ solutions
└── README.md                      # This guide
```

## ⚙️ Build and run

### Requirements

- GCC/G++ with C++17 support;
- a terminal or IDE capable of running console programs.

Because problem F uses `__int128`, **GNU C++17** is the recommended standard.

### Compile one solution

From the repository root:

```bash
g++ -std=gnu++17 -O2 -Wall -Wextra pacode/OPI2024/A.cpp -o solution
```

From inside this directory:

```bash
g++ -std=gnu++17 -O2 -Wall -Wextra A.cpp -o solution
```

### Run

Linux or macOS:

```bash
./solution
```

Windows PowerShell:

```powershell
.\solution.exe
```

Using an input file:

```bash
./solution < input.txt
```

## 📚 How to study these solutions

1. Open the statement PDF and identify the constraints.
2. Design a solution before reading the implementation.
3. Compare your idea with the corresponding `.cpp` file.
4. Identify the invariant, recurrence, or data structure that makes the solution efficient.
5. Review the Git history to follow how the implementation evolved.
6. Reimplement the solution from memory and test edge cases.

## ⚠️ Notes

- These files are intended for study and reference.
- Try each problem before reading its solution.
- Accepted code can still be improved in readability, documentation, and portability.
- Generated binaries and object files are excluded by the repository's `.gitignore`.

## 🔗 Repository

Return to the [main repository README](../../README.md) for the complete C++ learning roadmap and the other study tracks.

---

<div align="center">

**10 problems. 10 accepted solutions. One complete OPI 2024 journey.** 🚀

</div>
