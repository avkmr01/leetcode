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

| Symbol | Value |   |
| ------ | ----- | - |
| M      | 1000  |   |
| D      | 500   |   |
| C      | 100   |   |
| L      | 50    |   |
| X      | 10    |   |
| V      | 5     |   |
| I      | 1     |   |

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