## 1. **Array**

An **array** is a data structure that stores a collection of elements, typically of the same data type, in a contiguous memory location. Each element is accessible by its index.

**Example:**

```python
arr = [3, 1, 4, 1, 5, 9]

# Accessing elements
print(arr[0])  # Output: 3
print(arr[2])  # Output: 4

# Modifying an element
arr[1] = 7
print(arr)  # Output: [3, 7, 4, 1, 5, 9]

# Looping through the array
for num in arr:
    print(num)
```

Use cases include storing data in a fixed-size container or representing sequences like strings, lists of numbers, etc.

---

## 2. **Two Pointers**

The **two pointers** technique involves using two indices (or pointers) to iterate through a data structure, often to solve problems efficiently involving pairs, subarrays, or certain conditions.

**Example Problem:**
**Given a sorted array, find if there exists a pair with a given sum.**

```python
def has_pair_with_sum(arr, target):
    left, right = 0, len(arr) - 1
    while left < right:
        current_sum = arr[left] + arr[right]
        if current_sum == target:
            return True
        elif current_sum < target:
            left += 1
        else:
            right -= 1
    return False

arr = [1, 2, 3, 4, 6]
target = 7
print(has_pair_with_sum(arr, target))  # Output: True
```

This is more efficient than using nested loops (O(n²)) and works in O(n) for sorted arrays.

---

## 3. **Greedy**

A **greedy algorithm** makes the locally optimal choice at each step with the hope that this will lead to a globally optimal solution. It doesn't revisit decisions once made.

**Example Problem:**
**Activity Selection Problem – Find the maximum number of non-overlapping activities.**

```python
def max_activities(activities):
    # Sort activities by end time
    activities.sort(key=lambda x: x[1])
    
    count = 1
    last_end_time = activities[0][1]

    for i in range(1, len(activities)):
        if activities[i][0] >= last_end_time:
            count += 1
            last_end_time = activities[i][1]
    
    return count

# Each tuple is (start, end)
activities = [(1, 3), (2, 4), (3, 5), (0, 6), (5, 7)]
print(max_activities(activities))  # Output: 3
```

The algorithm picks the next activity that ends the earliest and doesn't overlap with previously selected ones.

---
