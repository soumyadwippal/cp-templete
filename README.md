# 🚀 Codeforces CP Template

A clean, fast, and reusable **Competitive Programming (CP)** template for **Codeforces**, written in **C++17**.

> Author: **Soumyadwip Pal**
>
> 

---

## 📌 Features

This template is designed for Codeforces and other competitive programming platforms.

### ⚡ Fast I/O

* `FAST_IO` macro for faster input/output.

### 🧩 Type Aliases

* `ll`, `ld`, `ull`
* `pii`, `pll`
* `vi`, `vll`, `vpii`, `vpll`

### 🛠️ Useful Macros

* `pb`, `ff`, `ss`
* `all()`, `rall()`
* `sz()`

### 🔢 Number Theory Utilities

* Iterative **GCD**
* **LCM**
* **Extended Euclidean Algorithm**
* **Binary Exponentiation**
* **Modular Inverse** (Fermat's Little Theorem)

### 🐞 Debugging

* `debug(x)` macro.
* Automatically disabled on Codeforces (`ONLINE_JUDGE`).

### 🧱 Contest Structure

* `solve()` function for each test case.
* Ready for single or multiple test cases.

---

## 📂 Repository Structure

```text
.
├── template.cpp        # Main Codeforces template
├── README.md           # Documentation
└── snippets/           # Optional CP snippets (future)
```

---

## ▶️ Usage

Compile with **C++17**.

```bash
g++ -std=c++17 -O2 -Wall template.cpp -o main
./main
```

Input format for multiple test cases:

```text
t
test_case_1
test_case_2
...
```

The template already handles:

```cpp
int T;
cin >> T;

while (T--) {
    solve();
}
```

---

## 📚 Included Algorithms

| Algorithm             | Complexity   |
| --------------------- | ------------ |
| GCD (Euclid)          | `O(log N)`   |
| LCM                   | `O(log N)`   |
| Extended GCD          | `O(log N)`   |
| Binary Exponentiation | `O(log N)`   |
| Modular Inverse       | `O(log MOD)` |

---

## 🧩 Optional Snippets (Easy to Add)

* Sieve of Eratosthenes
* Prime Checking
* Prefix Sum
* Difference Array
* Grid Direction Arrays (4 & 8 directions)
* DSU (Disjoint Set Union)
* Segment Tree
* Fenwick Tree (BIT)
* BFS / DFS
* Dijkstra
* Topological Sort

These snippets can be added when needed instead of making the template too large.

---

## 🎯 Designed For

* Codeforces
* CodeChef
* AtCoder
* CSES
* ICPC Practice

---

## 📖 License

This repository is open-source and free to use for learning and competitive programming.

If you use this template, a ⭐ on the repository is appreciated.

Happy Coding! 🚀
