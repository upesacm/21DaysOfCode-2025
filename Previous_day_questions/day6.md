
<h2 align="center">Week 1 Day 6 (21/06/2025)</h2>

## 1. Find Duplicates in Array
A problem that teaches duplicate detection using mathematical constraints and the pigeonhole principle.

Given an integer array of `n+1` integers where each integer is between `1` and `n` (inclusive), find **one duplicate number** that appears in the array.

By the **pigeonhole principle**, at least one duplicate must exist since we have `n+1` numbers in the range `1` to `n`. This problem teaches you about **detecting duplicates** and **understanding mathematical constraints** in array problems.

**Your task:** Find one duplicate number that appears in the array.

### Examples

**Input:**
```
nums = [1, 3, 4, 2, 2]
```
**Output:**
```
2
```
**Explanation:** The number 2 appears twice in the array

---

**Input:**
```
nums = [3, 1, 3, 4, 2]
```
**Output:**
```
3
```
**Explanation:** The number 3 appears twice in the array

---

**Input:**
```
nums = [1, 1, 2]
```
**Output:**
```
1
```
**Explanation:** The number 1 appears twice in the array

---

## 2. Check if Array is Fully Increasing
A problem that teaches sequence validation and introduces monotonic array concepts.

Given an array of integers `nums`, return `true` if each number is **strictly greater** than the one before it. Otherwise, return `false`.

**Note:** The array must strictly increase - no equal numbers allowed.

This problem teaches you about **sequence validation** and introduces concepts of **monotonic arrays** that are important in many algorithmic applications.

**Your task:** Return true if the array is strictly increasing, otherwise return false.

### Examples

**Input:**
```
nums = [1, 2, 3, 4]
```
**Output:**
```
true
```

---

**Input:**
```
nums = [1, 2, 2, 3]
```
**Output:**
```
false
```

---

**Input:**
```
nums = [5, 4, 3]
```
**Output:**
```
false
```

---

## 3. Find the Length of the Longest Consecutive Increasing Subarray
A problem that introduces subarray analysis and consecutive pattern tracking.

Given an array `nums` of size `n`, find the **length of the longest contiguous subarray** where each element is strictly greater than the previous one (by 1).

This problem introduces you to **subarray analysis** and teaches you about **tracking consecutive patterns**, which is fundamental for sequence analysis and dynamic programming approaches.

**Your task:** Find the length of the longest contiguous subarray with consecutive increasing elements.

### Examples

**Input:**
```
nums = [1, 2, 2, 3, 4, 1, 2, 3, 4, 5]
```
**Output:**
```
5
```
**(subarray: [1, 2, 3, 4, 5])**

---

**Input:**
```
nums = [5, 4, 3, 2]
```
**Output:**
```
1
```

---

**Input:**
```
nums = [1, 2, 3, 5, 6, 7]
```
**Output:**
```
3
```
**(subarray: [5, 6, 7])**
