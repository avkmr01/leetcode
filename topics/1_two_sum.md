## 1. **Array**

### What is an Array?

An **array** is a **collection of elements** stored at **contiguous memory locations**, where each element can be accessed using an **index**.

* **Fixed size** (in most programming languages)
* **Fast access** using index: O(1) time

### Example:

```plaintext
Index:   0   1   2   3   4
Array: [10, 20, 30, 40, 50]
```

To access the 3rd element:

```python
arr[2]  # Output: 30
```

### Python Example:

```python
arr = [10, 20, 30, 40, 50]
print(arr[2])  # Output: 30
```

### Common Operations:

* Access: `arr[i]`
* Insert: `arr.append(60)`
* Delete: `arr.pop(2)`

---

## 2. **Hash Table**

### What is a Hash Table?

A **Hash Table** (also known as **Hash Map**) is a **key-value** data structure.

* Uses a **hash function** to compute an index (called a hash) into an array of buckets.
* Very efficient for **lookup, insert, and delete**: O(1) on average.

### Real-life Example:

Imagine a **dictionary**:

* Word: Key
* Meaning: Value

You look up the **word** to get the **meaning** – that’s how a hash table works.

### Python Example (using dictionary):

```python
# Creating a hash table using a dictionary
hash_table = {
    "apple": "A fruit",
    "ball": "A round object",
    "cat": "An animal"
}

# Accessing a value by key
print(hash_table["ball"])  # Output: A round object

# Adding a new key-value pair
hash_table["dog"] = "A loyal pet"

# Deleting a key-value pair
del hash_table["cat"]

print(hash_table)
```

### Output:

```python
A round object
{'apple': 'A fruit', 'ball': 'A round object', 'dog': 'A loyal pet'}
```

---
