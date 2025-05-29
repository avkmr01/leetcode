## 1. Two Pointers

### What is the Two Pointers Technique?

The **Two Pointers** technique involves using two variables (pointers) that move through a data structure (like an array or string) to solve problems efficiently.

This method is useful for problems involving:

* Searching pairs in a sorted array
* Reversing data
* Detecting duplicates
* Solving problems in linear time

### Example: Check if a string is a palindrome

```python
def is_palindrome(s):
    left, right = 0, len(s) - 1

    while left < right:
        if s[left] != s[right]:
            return False
        left += 1
        right -= 1

    return True

print(is_palindrome("racecar"))  # Output: True
print(is_palindrome("hello"))    # Output: False
```

---

## 2. String

### What is a String?

A **string** is a sequence of characters used to represent text. Strings are typically immutable in many languages, including Python.

Common operations on strings:

* Access by index
* Concatenation
* Slicing
* Searching
* Replacing

### Example:

```python
s = "hello world"

print(s[0])         # Output: h
print(s[6:])        # Output: world
print(s.upper())    # Output: HELLO WORLD
print(s.count("l")) # Output: 3
```

---

## 3. Dynamic Programming

### What is Dynamic Programming?

**Dynamic Programming (DP)** is an optimization technique used to solve complex problems by breaking them down into simpler subproblems, storing the results of these subproblems to avoid redundant computation.

Used when:

* Problem has **overlapping subproblems**
* Problem has **optimal substructure** (optimal solution can be built from optimal solutions of subproblems)

### Example: Fibonacci Sequence

#### Recursive (inefficient):

```python
def fib(n):
    if n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)
```

#### Optimized with Dynamic Programming:

```python
def fib_dp(n):
    dp = [0] * (n + 1)
    dp[1] = 1

    for i in range(2, n + 1):
        dp[i] = dp[i - 1] + dp[i - 2]

    return dp[n]

print(fib_dp(10))  # Output: 55
```

This version runs in O(n) time with O(n) space.

---
