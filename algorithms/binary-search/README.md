# Binary Search

Binary search is a fundamental algorithm used to efficiently locate a specific target value within a sorted array. It operates on the principle of repeatedly dividing the search interval in half until the target value is found or the search interval becomes empty.
- TC: O(logn) 
- SC: O(1)

## Algorithm

The binary search algorithm follows these steps:

1. Start with the entire sorted array.
2. Calculate the middle index of the current search interval.
3. Compare the element at the middle index with the target value.
4. If the middle element is equal to the target, return the index of the middle element (target found).
5. If the middle element is less than the target, update the search interval to the right half (i.e., discard the left half).
6. If the middle element is greater than the target, update the search interval to the left half (i.e., discard the right half).
7. Repeat steps 2-6 until the target is found or the search interval becomes empty (target not present).


## Problems
1. https://www.spoj.com/problems/AGGRCOW/
2. https://codeforces.com/problemset/problem/68/B

## Articles
 - https://cp-algorithms.com/num_methods/binary_search.html
 - https://codeforces.com/blog/entry/113032