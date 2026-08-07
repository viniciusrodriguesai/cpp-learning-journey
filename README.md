# 🚀 C++ Learning Journey

<div align="center">

**A hands-on journey through C++, algorithms, and competitive programming.**

[![C++](https://img.shields.io/badge/language-C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![C++17](https://img.shields.io/badge/standard-C%2B%2B17-004482?style=for-the-badge&logo=cplusplus&logoColor=white)](https://en.cppreference.com/w/cpp/17)
[![Learning in Public](https://img.shields.io/badge/learning-in%20public-7c3aed?style=for-the-badge)](https://github.com/viniciusrodriguesai/cpp-learning-journey)
[![License: MIT](https://img.shields.io/badge/license-MIT-22c55e?style=for-the-badge)](LICENSE)

Exercises, experiments, and solutions built throughout my studies — from first programs to informatics olympiad challenges.

[Overview](#-about-this-repository) • [Contents](#-what-you-will-find-here) • [Getting started](#%EF%B8%8F-build-and-run) • [Roadmap](#%EF%B8%8F-roadmap)

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
> This is an active learning repository. Some solutions are developed incrementally and intentionally preserve different stages of the learning process.

## 🧭 What you will find here

| Area | Topics | Explore |
| --- | --- | --- |
| C++ fundamentals | Variables, constants, scope, operators, increment, and first programs | [`01-fundamentos/`](01-fundamentos/) |
| Number theory | Prime numbers, divisors, factorization, and numerical properties | [`pacode/Number_Theory_(Iniciante)/`](<pacode/Number_Theory_(Iniciante)/>) |
| Dynamic programming | Frog, knapsack, paths, and other classic studies | [`pacode/`](pacode/) |
| OPI 2024 | PDF statements and solutions for problems B, C, and D | [`pacode/OPI2024/`](pacode/OPI2024/) |
| OPI 2025 | Solutions and experiments for several contest problems | [`pacode/opi_2025/`](pacode/opi_2025/) |
| Algorithm practice | Logic, frequency counting, maps, sorting, and search exercises | [`pacode/`](pacode/) |

### Current structure

```text
cpp-learning-journey/
├── 01-fundamentos/                 # First steps with the language
├── pacode/
│   ├── Number_Theory_(Iniciante)/  # Beginner number theory exercises
│   ├── OPI2024/                    # OPI 2024 statements and solutions
│   ├── opi_2025/                   # OPI 2025 solutions and studies
│   ├── programação_dinamica.../    # Intermediate track in progress
│   ├── frogg.cpp                   # Dynamic programming practice
│   ├── frogg2.cpp                  # A variation of the Frog problem
│   ├── knapsack_1.cpp              # The classic knapsack problem
│   └── divisores.cpp               # Divisor practice
├── LICENSE                         # MIT License
└── README.md                       # You are here
```

## 🧠 Concepts covered

The exercises explore concepts such as:

- fast input and output with `cin` and `cout`;
- variables, constants, operators, and control flow;
- strings, vectors, maps, and STL containers;
- sorting, frequency counting, and search;
- prime numbers, divisors, and factorization;
- dynamic programming and state optimization;
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

### 2. Choose and compile an exercise

For example, compile OPI 2024 problem C:

```bash
g++ -std=c++17 -O2 -Wall -Wextra -pedantic pacode/OPI2024/C.cpp -o solution
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
6. Record progress through small and focused commits.

## 🗺️ Roadmap

- [x] Basic syntax, variables, and operators
- [x] Conditions, loops, and input handling
- [x] First number theory problems
- [x] Introduction to dynamic programming
- [x] Practice with OPI problems
- [ ] Functions and deeper modularization
- [ ] Advanced vectors, strings, and STL
- [ ] Pointers and memory management
- [ ] Object-oriented programming
- [ ] Graphs, trees, and classic algorithms
- [ ] Complete C++ projects

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
