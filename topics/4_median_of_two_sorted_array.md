---

## 1. Array

### What is an Array?

An **array** is a data structure that stores a **fixed-size sequence of elements** of the same type. Each element is stored in a **contiguous memory location** and can be accessed using an **index**.

### Key Properties:

* Indexed access: `O(1)` time
* Fixed size (in most languages)
* Efficient for reading and iteration

### Example in Python:

```python
arr = [10, 20, 30, 40, 50]

print(arr[0])  # Output: 10
print(arr[3])  # Output: 40

arr[1] = 25     # Modify second element
print(arr)      # Output: [10, 25, 30, 40, 50]
```

---

## 2. Binary Search

### What is Binary Search?

**Binary Search** is a fast search algorithm that works on **sorted arrays**. It repeatedly divides the search range in half to find the target value.

### Time Complexity:

* **O(log n)** — much faster than linear search for large datasets

### How it works:

1. Start with the middle element of the array.
2. If it's equal to the target, return it.
3. If the target is smaller, search the left half.
4. If the target is larger, search the right half.

### Example in Python:

```python
def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1  # Not found

arr = [10, 20, 30, 40, 50]
print(binary_search(arr, 30))  # Output: 2
print(binary_search(arr, 25))  # Output: -1
```

---

## 3. Divide and Conquer

### What is Divide and Conquer?

**Divide and Conquer** is a problem-solving approach that works by:

1. **Dividing** the problem into smaller subproblems.
2. **Conquering** each subproblem (usually recursively).
3. **Combining** the results of the subproblems to solve the original problem.

### Classic Examples:

* Merge Sort
* Quick Sort
* Binary Search
* Fast Fourier Transform (FFT)

### Example: Merge Sort (uses Divide and Conquer)

```python
def merge_sort(arr):
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2

    left_half = merge_sort(arr[:mid])
    right_half = merge_sort(arr[mid:])

    return merge(left_half, right_half)

def merge(left, right):
    result = []
    i = j = 0

    # Merge the two sorted halves
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1

    # Append remaining elements
    result.extend(left[i:])
    result.extend(right[j:])
    return result

arr = [38, 27, 43, 3, 9, 82, 10]
print(merge_sort(arr))  # Output: [3, 9, 10, 27, 38, 43, 82]
```

---
