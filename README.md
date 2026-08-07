# 🚀 C++ Learning Journey

<div align="center">

**A hands-on journey through C++, algorithms, and competitive programming.**

[![C++](https://img.shields.io/badge/language-C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![C++17](https://img.shields.io/badge/standard-C%2B%2B17-004482?style=for-the-badge&logo=cplusplus&logoColor=white)](https://en.cppreference.com/w/cpp/17)
[![OPI 2024](https://img.shields.io/badge/OPI%202024-10%2F10%20accepted-22c55e?style=for-the-badge)](pacode/OPI2024/)
[![Learning in Public](https://img.shields.io/badge/learning-in%20public-7c3aed?style=for-the-badge)](https://github.com/viniciusrodriguesai/cpp-learning-journey)
[![License: MIT](https://img.shields.io/badge/license-MIT-22c55e?style=for-the-badge)](LICENSE)

Exercises, experiments, and accepted solutions built throughout my studies — from first programs to informatics olympiad challenges.

[Overview](#-about-this-repository) • [OPI 2024](#-opi-2024-complete-accepted-set) • [Getting started](#%EF%B8%8F-build-and-run) • [Roadmap](#%EF%B8%8F-roadmap)

</div>

---

## 💡 About this repository

This repository documents my progress in **C++** through real code. Each file represents a concept studied, an exercise solved, or an attempt to turn theory into practice.

The main goals are to:

- build a strong foundation in the language;
- improve logical thinking and problem-solving skills;
- study data structures and algorithmic techniques;
- prepare for programming contests and informatics olympiads;
- keep a visible record of continuous improvement.

> [!NOTE]
> This is an active learning repository. Some exercises preserve intermediate stages through their Git history, making it possible to follow each solution from its first scaffold to its accepted implementation.

## 🏆 OPI 2024: complete accepted set

The highlight of this repository is the [`pacode/OPI2024/`](pacode/OPI2024/) directory. It contains my complete solution set for the **2024 Informatics Programming Olympiad (OPI)** practice contest.

Every problem from **A to J was accepted by the online judge**. Each problem has:

- the official statement in PDF format;
- an individual C++17 implementation;
- a focused Git history showing how the solution evolved;
- an accepted final submission.

### Problems and techniques

| Problem | Main idea | Statement | Accepted solution |
| --- | --- | --- | --- |
| A — Cards | Greedy selection and custom string concatenation ordering | [PDF](pacode/OPI2024/839292-A.pdf) | [A.cpp](pacode/OPI2024/A.cpp) |
| B — Number of Digits | Repeated division and base representation | [PDF](pacode/OPI2024/839292-B.pdf) | [B.cpp](pacode/OPI2024/B.cpp) |
| C — Voting | Frequency counting, hash maps, and lexicographical sorting | [PDF](pacode/OPI2024/839292-C.pdf) | [C.cpp](pacode/OPI2024/C.cpp) |
| D — Game | Parity invariant and game observation | [PDF](pacode/OPI2024/839292-D.pdf) | [D.cpp](pacode/OPI2024/D.cpp) |
| E — Equation | Modular arithmetic, fast exponentiation, and periodic counting | [PDF](pacode/OPI2024/839292-E.pdf) | [E.cpp](pacode/OPI2024/E.cpp) |
| F | Dominance filtering and an intersection-based candidate hull | [PDF](pacode/OPI2024/839292-F.pdf) | [F.cpp](pacode/OPI2024/F.cpp) |
| G | Number-theoretic transform, string matching, and DSU | [PDF](pacode/OPI2024/839292-G.pdf) | [G.cpp](pacode/OPI2024/G.cpp) |
| H | Constructive algorithm with parity-aware matrix placement | [PDF](pacode/OPI2024/839292-H.pdf) | [H.cpp](pacode/OPI2024/H.cpp) |
| I | Tree bipartition and breadth-first search | [PDF](pacode/OPI2024/839292-I.pdf) | [I.cpp](pacode/OPI2024/I.cpp) |
| J | Dynamic programming over compact column states | [PDF](pacode/OPI2024/839292-J.pdf) | [J.cpp](pacode/OPI2024/J.cpp) |

> [!IMPORTANT]
> The `10/10 accepted` badge refers to judge acceptance for all ten OPI 2024 solutions, not only successful compilation.

## 🧭 What you will find here

| Area | Topics | Explore |
| --- | --- | --- |
| C++ fundamentals | Variables, constants, scope, operators, increment, and first programs | [`01-fundamentos/`](01-fundamentos/) |
| Number theory | Prime numbers, divisors, factorization, and numerical properties | [`pacode/Number_Theory_(Iniciante)/`](<pacode/Number_Theory_(Iniciante)/>) |
| Dynamic programming | Frog, knapsack, paths, and state-based solutions | [`pacode/exercicios_avulsos/`](pacode/exercicios_avulsos/) |
| OPI 2024 | Complete accepted set of problems A–J with statements and solutions | [`pacode/OPI2024/`](pacode/OPI2024/) |
| OPI 2025 | Solutions and experiments for several contest problems | [`pacode/opi_2025/`](pacode/opi_2025/) |
| Standalone exercises | Divisors and classic dynamic-programming problems | [`pacode/exercicios_avulsos/`](pacode/exercicios_avulsos/) |

### Current structure

```text
cpp-learning-journey/
├── 01-fundamentos/                 # First steps with the language
├── pacode/
│   ├── Number_Theory_(Iniciante)/  # Beginner number theory exercises
│   ├── OPI2024/                    # 10/10 accepted: problems A through J
│   ├── opi_2025/                   # OPI 2025 solutions and studies
│   ├── programação_dinamica.../    # Intermediate track in progress
│   └── exercicios_avulsos/         # Standalone algorithm exercises
│       ├── divisores.cpp           # Divisor practice
│       ├── frogg.cpp               # Dynamic programming practice
│       ├── frogg2.cpp              # A variation of the Frog problem
│       ├── knapsack_1.cpp          # The classic knapsack problem
│       └── vacation.cpp            # Activity-selection dynamic programming
├── LICENSE                         # MIT License
└── README.md                       # You are here
```

## 🧠 Concepts covered

The exercises explore concepts such as:

- fast input and output with `cin` and `cout`;
- variables, constants, operators, and control flow;
- strings, vectors, tuples, maps, and STL containers;
- sorting, frequency counting, greedy strategies, and search;
- prime numbers, divisors, modular inverses, and fast exponentiation;
- graph traversal, bipartite coloring, and disjoint-set union;
- dynamic programming and compact state transitions;
- constructive algorithms and parity invariants;
- number-theoretic transforms for fast string matching;
- exact comparisons with `__int128` and candidate-hull techniques;
- complexity analysis and competitive problem-solving.

## ⚙️ Build and run

### Requirements

You need a compiler with **C++17** support. The examples are compatible with GCC/G++.

Check your installation:

```bash
g++ --version
```

### 1. Clone the repository

```bash
git clone https://github.com/viniciusrodriguesai/cpp-learning-journey.git
cd cpp-learning-journey
```

### 2. Choose and compile a solution

For example, compile OPI 2024 problem G:

```bash
g++ -std=gnu++17 -O2 -Wall -Wextra pacode/OPI2024/G.cpp -o solution
```

### 3. Run it

On Linux or macOS:

```bash
./solution
```

On Windows:

```powershell
.\solution.exe
```

You can also redirect an input file:

```bash
./solution < input.txt
```

## 🏁 Suggested study workflow

1. Read the statement and identify the input, output, and constraints.
2. Solve small examples by hand.
3. Write a first correct solution, even if it is not yet optimal.
4. Analyze its time and space complexity.
5. Refactor, test edge cases, and compare approaches.
6. Submit to the judge and use the verdict as feedback.
7. Record meaningful progress through focused commits.

## 🗺️ Roadmap

- [x] Basic syntax, variables, and operators
- [x] Conditions, loops, and input handling
- [x] Number theory and modular arithmetic
- [x] Dynamic programming and compact states
- [x] Graph traversal, bipartite coloring, and DSU
- [x] Advanced string matching with NTT
- [x] Complete and pass all OPI 2024 problems A–J
- [ ] Pointers and memory management in greater depth
- [ ] Object-oriented programming
- [ ] More graph, tree, and geometry algorithms
- [ ] Complete standalone C++ projects

## 🤝 Using this repository

If you are learning C++ too, feel free to:

- explore the solutions;
- compare different approaches;
- adapt the examples for your own studies;
- open an issue with a suggestion or discussion;
- fork the repository and build your own learning journey.

These solutions are learning material. Try solving each challenge before reading the answer — that is where most of the learning happens.

## 📄 License

This project is available under the [MIT License](LICENSE). You may study, modify, and reuse the code under the terms of the license.

## 👨‍💻 Author

Created by **Vinicius Rodrigues** as a public record of learning and growth in C++.

[![GitHub](https://img.shields.io/badge/GitHub-viniciusrodriguesai-181717?style=for-the-badge&logo=github)](https://github.com/viniciusrodriguesai)

---

<div align="center">

**Learn, practice, fail, improve, and try again.** 💻

If this repository helped you, consider leaving a ⭐.

</div>
