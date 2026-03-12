**Hybrid Merge Sort Implementation in C**

This repository contains the implementation and explanation of the Hybrid Merge Sort Algorithm using the C programming language.

About Hybrid Merge Sort

Hybrid Merge Sort is an optimized version of Merge Sort.
It combines Merge Sort with Insertion Sort to improve performance on small subarrays.

Merge Sort is efficient for large datasets, while Insertion Sort performs better for small arrays due to lower overhead. Hybrid Merge Sort switches to Insertion Sort when the subarray size becomes small.

Algorithm Steps

Divide the array into two halves.

Recursively apply Hybrid Merge Sort to each half.

If the subarray size becomes smaller than a threshold (e.g., 10 elements), use Insertion Sort.

Merge the sorted subarrays.

Time Complexity
Case	Complexity
Best Case	O(n log n)
Average Case	O(n log n)
Worst Case	O(n log n)
Space Complexity

O(n)

Example

Input

8 3 1 7 0 10 2

Sorted Output

0 1 2 3 7 8 10
