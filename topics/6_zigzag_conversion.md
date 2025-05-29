### String

A **string** is a **sequence of characters** used to represent text. Strings are one of the most commonly used data types in programming.

In most languages, including Python, strings are **immutable**, meaning once a string is created, it cannot be changed in place.

---

### Key Characteristics:

* Can contain letters, numbers, symbols, and spaces.
* Indexed: Characters can be accessed by position (index starts at 0).
* Supports slicing, iteration, and many built-in methods.

---

### Example in Python:

```python
s = "hello world"

# Accessing characters
print(s[0])       # Output: h

# Slicing (substring)
print(s[0:5])     # Output: hello

# String length
print(len(s))     # Output: 11

# Changing case
print(s.upper())  # Output: HELLO WORLD
print(s.lower())  # Output: hello world

# Counting characters
print(s.count("l"))  # Output: 3

# Finding a substring
print(s.find("world"))  # Output: 6

# Replacing part of a string
print(s.replace("world", "Python"))  # Output: hello Python
```

---

### Common String Operations:

| Operation         | Description                | Example                                 |
| ----------------- | -------------------------- | --------------------------------------- |
| `len(s)`          | Length of the string       | `len("hello")` → `5`                    |
| `s[i]`            | Character at index `i`     | `"hello"[1]` → `'e'`                    |
| `s[start:end]`    | Slice from start to end-1  | `"hello"[1:4]` → `'ell'`                |
| `s.upper()`       | Convert to uppercase       | `'abc'.upper()` → `'ABC'`               |
| `s.lower()`       | Convert to lowercase       | `'ABC'.lower()` → `'abc'`               |
| `s.find(sub)`     | Find index of substring    | `'hello'.find('l')` → `2`               |
| `s.replace(a, b)` | Replace substring a with b | `'hello'.replace('e', 'a')` → `'hallo'` |

---

### String Iteration Example:

```python
for char in "data":
    print(char)
```

**Output:**

```
d
a
t
a
```

---
