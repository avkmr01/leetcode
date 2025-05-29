## 1. **Linked List**

A **Linked List** is a linear data structure where elements (called **nodes**) are connected using **pointers**. Each node contains:

* **Data**: The actual value.
* **Next**: A reference (or pointer) to the next node in the list.

### Types:

* **Singly Linked List**: Each node points to the next node.
* **Doubly Linked List**: Each node points to both the next and previous node.
* **Circular Linked List**: Last node points back to the first node.

### Example (Singly Linked List):

```plaintext
[10 | next] -> [20 | next] -> [30 | null]
```

### Python Example:

```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")

# Usage
ll = LinkedList()
ll.append(10)
ll.append(20)
ll.append(30)
ll.print_list()
```

**Output:**

```
10 -> 20 -> 30 -> None
```

---

## 2. **Math**

**Math** in programming generally refers to using mathematical operations and concepts to solve problems.

### Example: Finding the factorial of a number

Factorial of `n` (`n!`) is:
`n! = n * (n - 1) * (n - 2) * ... * 1`

So:

* 5! = 5 × 4 × 3 × 2 × 1 = 120

### Python Example:

```python
def factorial(n):
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result

print(factorial(5))  # Output: 120
```

---

## 3. **Recursion**

**Recursion** is when a function calls **itself** to solve a smaller instance of the same problem.

### Key Idea:

Every recursive function has:

* **Base Case**: When to stop recursion.
* **Recursive Case**: When the function calls itself.

### Example: Recursive Factorial

```python
def factorial(n):
    if n == 0 or n == 1:  # Base case
        return 1
    else:
        return n * factorial(n - 1)  # Recursive case

print(factorial(5))  # Output: 120
```

### How it works:

```
factorial(5)
= 5 * factorial(4)
= 5 * 4 * factorial(3)
= 5 * 4 * 3 * factorial(2)
= 5 * 4 * 3 * 2 * factorial(1)
= 5 * 4 * 3 * 2 * 1 = 120
```

---
