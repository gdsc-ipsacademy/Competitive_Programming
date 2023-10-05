# Binary Search

Insertion sort is a simple and efficient comparison-based sorting algorithm that builds the sorted portion of an array one item at a time. It iterates through the array and "inserts" each unsorted element into its correct position in the sorted portion. The algorithm is stable, meaning it preserves the relative order of equal elements.

- Time Complexity: O(n^2) in the worst and average cases, where n is the number of elements to be sorted. It can perform better on nearly sorted data.
- Space Complexity: O(1)

## Algorithm

The insertion sort algorithm can be described with the following steps:

1. Start with the entire array, considering the first element as the sorted portion.
2. Iterate through the unsorted portion, comparing each element with the elements in the sorted portion.
3. Insert the current unsorted element into its correct position in the sorted portion, shifting the larger elements to the right to make space.
4. Move to the next unsorted element and repeat steps 2-3.
5. Continue this process until the entire array is sorted.


## Problems
1. https://practice.geeksforgeeks.org/problems/insertion-sort/1
2. https://www.codingninjas.com/studio/problems/insertion-sort_3155179

## Articles
 - https://www.geeksforgeeks.org/insertion-sort/
 - https://takeuforward.org/data-structure/insertion-sort-algorithm/