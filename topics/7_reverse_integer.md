### Math

**Math** in programming refers to performing mathematical operations using operators, functions, or libraries provided by a programming language.

It includes:

* Basic arithmetic
* Advanced mathematical functions
* Logical and bitwise operations
* Use of built-in libraries (like `math` in Python)

---

### 1. Basic Arithmetic Operations

These are the core mathematical operations:

| Operation      | Symbol | Example   | Result |
| -------------- | ------ | --------- | ------ |
| Addition       | `+`    | `5 + 3`   | `8`    |
| Subtraction    | `-`    | `9 - 2`   | `7`    |
| Multiplication | `*`    | `4 * 2`   | `8`    |
| Division       | `/`    | `10 / 2`  | `5.0`  |
| Integer Div.   | `//`   | `10 // 3` | `3`    |
| Modulus        | `%`    | `10 % 3`  | `1`    |
| Exponentiation | `**`   | `2 ** 3`  | `8`    |

---

### 2. Using Python’s `math` Module

Python has a built-in module named `math` for advanced mathematical operations.

```python
import math

print(math.sqrt(16))       # Output: 4.0
print(math.pow(2, 3))      # Output: 8.0
print(math.ceil(3.2))      # Output: 4
print(math.floor(3.7))     # Output: 3
print(math.factorial(5))   # Output: 120
print(math.pi)             # Output: 3.141592653589793
```

---

### 3. Application Example: Area of a Circle

```python
import math

def area_of_circle(radius):
    return math.pi * radius ** 2

print(area_of_circle(5))  # Output: 78.53981633974483
```

---

### 4. Logical Use Case: Prime Number Check

```python
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

print(is_prime(13))  # Output: True
print(is_prime(15))  # Output: False
```

---
