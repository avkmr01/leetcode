### 1. **Array**

An **array** is a collection of elements stored at contiguous memory locations. All elements in an array have the same type and are accessed by their index.

* Fixed size (in most languages)
* Index starts at 0
* Efficient access by index

---

**Example (C++):**

```cpp
int arr[5] = {10, 20, 30, 40, 50};

// Access element at index 2
int x = arr[2];  // x = 30

// Loop through array
for (int i = 0; i < 5; i++) {
    std::cout << arr[i] << " ";
}
```

**Output:**

```
10 20 30 40 50
```

---

### 2. **Two Pointers**

**Two pointers** is a technique used mainly with sorted arrays (or sometimes strings) to solve problems efficiently by using two indices that move toward each other or in the same direction.

* Often used to find pairs or triplets matching a condition
* Usually reduces time complexity from O(n²) to O(n)

---

**Example:** Find if there exists two numbers in a sorted array that sum up to a target value.

```cpp
#include <iostream>
#include <vector>
using namespace std;

bool hasPairWithSum(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return true;
        } else if (sum < target) {
            left++;   // Increase sum by moving left pointer right
        } else {
            right--;  // Decrease sum by moving right pointer left
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 3, 4, 5, 7, 10};
    int target = 9;

    if (hasPairWithSum(nums, target))
        cout << "Found a pair with sum " << target << endl;
    else
        cout << "No pair found with sum " << target << endl;

    return 0;
}
```

**Output:**

```
Found a pair with sum 9
```

---

### 3. **Sorting**

**Sorting** is the process of arranging data in a certain order (ascending or descending).

* Important for optimizing searching and other algorithms
* Common algorithms: Bubble Sort, Merge Sort, Quick Sort

---

**Example:** Bubble Sort (ascending order)

```cpp
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& nums) {
    int n = nums.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;  // Already sorted
    }
}

int main() {
    vector<int> nums = {5, 2, 9, 1, 5, 6};

    bubbleSort(nums);

    for (int num : nums) {
        cout << num << " ";
    }
}
```

**Output:**

```
1 2 5 5 6 9
```

---
