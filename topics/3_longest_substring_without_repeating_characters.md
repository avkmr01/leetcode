## 1. **Hash Table**

### What is a Hash Table?

A **Hash Table** is a **key-value** data structure. It allows you to store values and retrieve them efficiently using keys.

* Internally uses a **hash function** to map keys to indexes.
* Average time complexity for insert, delete, and lookup: **O(1)**.

### Use Cases:

* Fast lookups
* Caching data
* Counting occurrences (like frequency of words)

### Python Example:

```python
# Using a dictionary as a hash table
hash_table = {
    "apple": 5,
    "banana": 2,
    "orange": 7
}

# Accessing value
print(hash_table["banana"])  # Output: 2

# Inserting a new key-value
hash_table["grape"] = 4

# Deleting a key
del hash_table["orange"]

print(hash_table)
```

### Output:

```python
2
{'apple': 5, 'banana': 2, 'grape': 4}
```

---

## 2. **String**

### What is a String?

A **string** is a **sequence of characters**. It’s one of the most used data types in programming.

In Python, strings are immutable (you can’t change them directly).

### Use Cases:

* Text processing
* Pattern matching
* Data parsing

### Python Example:

```python
s = "hello world"

# Access characters
print(s[0])       # Output: h

# Slicing
print(s[0:5])     # Output: hello

# String functions
print(s.upper())  # Output: HELLO WORLD
print(s.count("l"))  # Output: 3
```

---

## 3. **Sliding Window**

### What is Sliding Window?

The **sliding window** is an optimization technique for problems involving **arrays or strings**, where you examine a **subarray of size k** and move it across the input instead of recalculating everything each time.

It’s very efficient — reducing **O(n²)** solutions to **O(n)**.

### Use Cases:

* Finding max/min in subarrays
* Sum of subarrays
* Longest substring without repeating characters

### Example Problem: Find the maximum sum of a subarray of size 3.

```python
def max_sum_subarray(arr, k):
    n = len(arr)
    max_sum = current_sum = sum(arr[:k])

    for i in range(k, n):
        current_sum = current_sum - arr[i - k] + arr[i]
        max_sum = max(max_sum, current_sum)

    return max_sum

arr = [2, 1, 5, 1, 3, 2]
k = 3
print(max_sum_subarray(arr, k))  # Output: 9 (5 + 1 + 3)
```

---
