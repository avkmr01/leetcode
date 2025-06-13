# leetcode

**1. Two Sum**

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/1_two_sum.md)
<br>
[Problem Link](https://leetcode.com/problems/two-sum/)<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/1_two_sum.cpp)

---

**2. Add Two Numbers**

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/2_add_two_numbers.md)
<br>
[Problem Link](https://leetcode.com/problems/add-two-numbers/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/2_add_two_numbers.cpp)

---

**3. Longest Substring Without Repeating Characters**

Given a string `s`, find the length of the longest substring without repeating characters.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/3_longest_substring_without_repeating_characters.md)
<br>
[Problem Link](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/3_longest_substring_without_repeating_characters.cpp)

---

**4. Median of Two Sorted Arrays**

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/4_median_of_two_sorted_array.md)
<br>
[Problem Link](https://leetcode.com/problems/median-of-two-sorted-arrays/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/4_median_of_two_sorted_array.cpp)

---

**5. Longest Palindromic Substring**

Given a string `s`, return the longest palindromic substring in `s`.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/5_longest_pallindromic_substring.md)
<br>
[Problem Link](https://leetcode.com/problems/longest-palindromic-substring/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/5_longest_pallindromic_substring.cpp)

---

**6. Zigzag Conversion**

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this:

```
P   A   H   N
A P L S I I G
Y   I   R
```



And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

`string convert(string s, int numRows);`

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/6_zigzag_conversion.md)
<br>
[Problem Link](https://leetcode.com/problems/zigzag-conversion/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/6_zigzag_conversion.cpp)

---

**7. Reverse Integer**

Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2³¹, 2³¹ - 1]`, then return 0.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/7_reverse_integer.md)
<br>
[Problem Link](https://leetcode.com/problems/reverse-integer/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/7_reverse_integer.cpp)

---

**8. String to Integer (atoi)**

Implement the `myAtoi(string s)` function, which converts a string to a 32-bit signed integer (similar to C/C++'s `atoi` function).([Medium][11])

The algorithm for `myAtoi(string s)` is as follows:([Progiez][12])

* Read in and ignore any leading whitespace.
* Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
* Read in next the characters until the next non-digit character or the end of the input is reached. The rest of the string is ignored.
* Convert these digits into an integer (i.e. "123" → 123, "0032" → 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
* If the integer is out of the 32-bit signed integer range \[-2³¹, 2³¹ - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -2³¹ should be clamped to -2³¹, and integers greater than 2³¹ - 1 should be clamped to 2³¹ - 1.
* Return the integer as the final result.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/8_string_to_integer_atoi.md)
<br>
[Problem Link](https://leetcode.com/problems/string-to-integer-atoi/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/8_string_to_integer_atoi.cpp)

---

**9. Palindrome Number**

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

An integer is a palindrome when it reads the same backward as forward.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/9_pallindrome_number.md)
<br>
[Problem Link](https://leetcode.com/problems/palindrome-number/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/9_pallindrome_number.cpp)

---

**10. Regular Expression Matching**

Given an input string `s` and a pattern `p`, implement regular expression matching with support for '.' and '\*' where:

* '.' Matches any single character.
* '\*' Matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/10_regular_expression_matching.md)
<br>
[Problem Link](https://leetcode.com/problems/regular-expression-matching/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/10_regular_expression_matching.cpp)

---

**11. Container With Most Water**

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/11_container_with_most_water.md)
<br>
[Problem Link](https://leetcode.com/problems/container-with-most-water/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/11_container_with_most_water.cpp)

---

**12. Integer to Roman**

Given an integer `num`, convert it to a Roman numeral.

Roman numeral symbols and their values:

| Symbol | Value |
| ------ | ----- |
| M      | 1000  |
| D      | 500   |
| C      | 100   |
| L      | 50    |
| X      | 10    |
| V      | 5     |
| I      | 1     |

Rules:

* Roman numerals are written from largest to smallest from left to right.
* However, in some cases, a smaller numeral appears before a larger one to indicate subtraction.
* There are six instances where subtraction is used:

  * `I` can be placed before `V` (5) and `X` (10) to make 4 and 9.
  * `X` can be placed before `L` (50) and `C` (100) to make 40 and 90.
  * `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/12_integer_to_roman.md)
<br>
[Problem Link](https://leetcode.com/problems/integer-to-roman/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/12_integer_to_roman.cpp)

---

**13. Roman to Integer**

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D`, and `M`.

| Symbol | Value |
| ------ | ----- |
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

For example, 2 is written as `II` in Roman numeral, just two ones added together. 12 is written as `XII`, which is simply `X + II`. The number 27 is written as `XXVII`, which is `XX + V + II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it, making four. The same principle applies to the number nine, which is written as `IX`.

There are six instances where subtraction is used:

* `I` can be placed before `V` (5) and `X` (10) to make 4 and 9.
* `X` can be placed before `L` (50) and `C` (100) to make 40 and 90.
* `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

Given a Roman numeral, convert it to an integer.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/13_roman_to_integer.md)
<br>
[Problem Link](https://leetcode.com/problems/roman-to-integer/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/13_roman_to_integer.cpp)

---

**14. Longest Common Prefix**

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = \["flower","flow","flight"]
Output: "fl"

Example 2:

Input: strs = \["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/14_longest_common_prefix.md)
<br>
[Problem Link](https://leetcode.com/problems/longest-common-prefix/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/14_longest_common_prefix.cpp)


---

Sure! Here is the official LeetCode description for the **3Sum** problem:

---

**15. 3Sum:**

Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that:

* `i != j`, `i != k`, and `j != k`, and
* `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must **not** contain duplicate triplets.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/15_3sum.md)
<br>
[Problem Link](https://leetcode.com/problems/3sum/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/15_3sum.cpp)

---

**15. 3Sum:**

Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that:

* `i != j`, `i != k`, and `j != k`, and
* `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must **not** contain duplicate triplets.

[Topics](https://github.com/avkmr01/leetcode/blob/main/topics/16_3sum_closest.md)
<br>
[Problem Link](https://leetcode.com/problems/3sum-closest/)
<br>
[Solution](https://github.com/avkmr01/leetcode/blob/main/solutions/16_3sum_closest.cpp)

---