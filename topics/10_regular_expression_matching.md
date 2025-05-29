## 1. String

### What is a String?

A **string** is a **sequence of characters**, used to store and manipulate text. In most languages, strings are immutable, meaning their contents cannot be changed after creation.

### Common operations on strings include:

* Indexing
* Slicing
* Searching
* Replacing
* Concatenation

### Example in Python:

```python
s = "algorithm"

# Accessing characters
print(s[0])        # Output: a

# Slicing
print(s[1:5])      # Output: lgor

# Changing case
print(s.upper())   # Output: ALGORITHM

# Counting and finding
print(s.count("o"))   # Output: 1
print(s.find("r"))    # Output: 4

# Replacing characters
print(s.replace("a", "A"))  # Output: Algorithm
```

---

## 2. Dynamic Programming

### What is Dynamic Programming?

**Dynamic Programming (DP)** is a method for solving problems by breaking them down into overlapping subproblems and solving each subproblem just once, storing its result.

DP is useful when:

* There are overlapping subproblems.
* There is an optimal substructure (the solution to the problem can be constructed from solutions to subproblems).

### Example: Fibonacci Sequence

#### Without DP (inefficient recursion):

```python
def fib(n):
    if n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)

print(fib(6))  # Output: 8
```

#### With DP (using memoization):

```python
def fib_dp(n):
    dp = [0] * (n + 1)
    if n > 0:
        dp[1] = 1

    for i in range(2, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2]

    return dp[n]

print(fib_dp(6))  # Output: 8
```

This version avoids recalculating the same values and runs in linear time.

---

## 3. Recursion

### What is Recursion?

**Recursion** is a technique where a function calls itself to solve smaller instances of the same problem. Every recursive function must have:

* **Base case(s)** – to stop the recursion.
* **Recursive case(s)** – to reduce the problem.

### Example: Factorial

```python
def factorial(n):
    if n == 0:
        return 1  # Base case
    return n * factorial(n - 1)  # Recursive case

print(factorial(5))  # Output: 120
```

### How it works:

```
factorial(5) = 5 * factorial(4)
factorial(4) = 4 * factorial(3)
factorial(3) = 3 * factorial(2)
factorial(2) = 2 * factorial(1)
factorial(1) = 1 * factorial(0)
factorial(0) = 1 (base case)
```

---
