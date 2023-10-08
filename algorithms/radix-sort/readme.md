# Radix Sort

Radix sort is a non-comparative sorting algorithm, which means that it does not compare the elements of the array to each other. Instead, it sorts the elements by distributing them into buckets according to their digits. This makes radix sort a very efficient sorting algorithm for large datasets.

Radix sort is a stable sorting algorithm, which means that it preserves the original order of equal elements. This can be important for certain applications, such as sorting a list of strings where the order of the strings matters.

### The time complexity of radix sort is `O(d(n + b))`, where:

- d is the number of digits in the maximum element
- n is the number of elements in the array
- b is the number of bases in the number system being used

### The space complexity of radix sort is `O(n + b)`, where:

- n is the number of elements in the array
- b is the number of bases in the number system being used

## Algorithm

The steps to follow:

1. The first step is to find the maximum element in the array. This is necessary to determine the number of digits in the largest element, which is needed to sort the elements by their least significant digit.
2. The next step is to create a bucket for each digit. This will be used to distribute the elements into the buckets according to their least significant digit.
3. The elements are then sorted by their least significant digit. This is done by iterating over the array and placing each element in the appropriate bucket.
4. Once the elements have been sorted by their least significant digit, they are distributed into the buckets. This is done by iterating over the buckets and placing each element in the array in the correct order.
5. Steps 3 and 4 are repeated until the elements have been sorted by all of their digits.

## Problems

1. https://practice.geeksforgeeks.org/problems/radix-sort/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
2. https://www.codingninjas.com/studio/problems/radix-sort_4605994
3. https://www.hackerrank.com/contests/hw1/challenges/radix-sort

## Articles

- https://www.geeksforgeeks.org/radix-sort/
- https://en.wikipedia.org/wiki/Radix_sort
