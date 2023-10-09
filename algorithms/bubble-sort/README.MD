# Bubble Sort Algorithm

Bubble sort is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, indicating that the list is sorted.
* TC : O(N^2)
* SC : O(1)

## Table of Contents
- [Algorithm](#algorithm)
- [Usage](#usage)
- [Problems](#problems)
- [Resources](#additional-resources)

## Algorithm

The bubble sort algorithm follows these steps:

1. Start with the entire array to be sorted.
2. Compare adjacent elements in the array.
3. If an element is greater than the one next to it, swap them.
4. Repeat steps 2 and 3 until no more swaps are needed (the array is sorted).


## Usage

You can use the `bubbleSort` function provided in the code to sort arrays of different data types. Here's an example of sorting an array of integers:

```cpp
std::vector<int> intArray = {64, 25, 12, 22, 11};
bubbleSort(intArray);
```
# Problems
1. https://www.codingninjas.com/studio/problems/bubble-sort_980524
2. https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/

## Articles
 - https://www.geeksforgeeks.org/bubble-sort/
 - https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/tutorial/


