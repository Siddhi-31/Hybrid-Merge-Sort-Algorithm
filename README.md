# Quick Sort Algorithm

This repository contains the implementation and explanation of the **Quick Sort Algorithm** using C programming language.

## About Quick Sort

Quick Sort is a **divide-and-conquer sorting algorithm**. It works by selecting a pivot element and partitioning the array so that:

- Elements smaller than the pivot are placed on the left
- Elements greater than the pivot are placed on the right

The same process is then applied recursively to the subarrays.

## Algorithm Steps

1. Choose a pivot element
2. Partition the array around the pivot
3. Recursively apply Quick Sort to the left subarray
4. Recursively apply Quick Sort to the right subarray

## Time Complexity

| Case | Complexity |
|-----|-------------|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n²) |

## Space Complexity

O(log n)

## Example

Input  

8 3 1 7 0 10 2

Sorted Output

0 1 2 3 7 8 10
