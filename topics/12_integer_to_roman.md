### 1. **Hash Table**

**Definition:**
A **hash table** is a data structure that stores data in a key-value pair format. It uses a **hash function** to compute an index into an array of buckets, from which the desired value can be found.

**Think of it like a dictionary** — you look up a word (key) and get its meaning (value).

**Example in Python:**

```python
# Creating a hash table (dictionary in Python)
phone_book = {
    "Alice": "123-456",
    "Bob": "789-012",
    "Charlie": "345-678"
}

# Accessing value using a key
print(phone_book["Bob"])  # Output: 789-012
```

**Use case:**
Fast lookups — e.g., looking up usernames or caching results.

---

### 2. **Math**

**Definition:**
Math refers to calculations, formulas, or problem-solving involving **numbers and logic**. It includes areas like algebra, geometry, and arithmetic.

**Example: Calculating the area of a circle**

```python
import math

radius = 5
area = math.pi * radius ** 2
print("Area of the circle:", area)
# Output: Area of the circle: 78.53981633974483
```

**Use case:**
Used everywhere from games (collision detection) to finance (interest calculation).

---

### 3. **String**

**Definition:**
A **string** is a sequence of characters used to represent text. In most programming languages, it’s enclosed in quotes (`" "` or `' '`).

**Example in Python:**

```python
name = "Alice"
greeting = "Hello, " + name + "!"
print(greeting)  # Output: Hello, Alice!
```

**Common operations on strings:**

* Concatenation: `"Hello" + "World"`
* Slicing: `"Hello"[1:4]` → `"ell"`
* Length: `len("Hello")` → `5`

**Use case:**
Used in text processing, user input, messages, file names, etc.
---