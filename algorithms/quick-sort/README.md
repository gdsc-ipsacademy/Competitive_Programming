# Quick sort

Quicksort is a sorting algorithm based on the divide and conquer approach where:

1. An array is divided into subarrays by selecting a pivot element (element selected from the array). While dividing the array, the pivot element should be positioned in such a way that elements less than pivot are kept on the left side and elements greater than pivot are on the right side of the pivot.

2. The left and right subarrays are also divided using the same approach. This process continues until each subarray contains a single element.

3. At this point, elements are already sorted. Finally, elements are combined to form a sorted array.

- Time Complexity: Best: O(nlog n) | Worst: O(n2) | Average: O(nlog n)
- Space Complexity: O(log n)

## Algorithm

The quick sort algorithm can be described with the following steps:

`QUICKSORT (array A, start, end)     
{  
 if (start < end)     
 {  
  p = partition(A, start, end)  
  QUICKSORT (A, start, p - 1)    
  QUICKSORT (A, p + 1, end)    
 }   
}`

The partition algorithm rearranges the sub-arrays in a place.

`PARTITION (array A, start, end)     
{  
  pivot ? A[end]     
  i ? start-1     
  for j ? start to end -1 {  
  do if (A[j] < pivot) {    
  then i ? i + 1     
  swap A[i] with A[j]   
   }}   
  swap A[i+1] with A[end]     
 9 return i+1  
}`


## Problems
1. https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm/one-sized-game/
2. https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm/noor-and-his-pond-760eabe0/

## Articles
- https://www.javatpoint.com/quick-sort
- https://www.programiz.com/dsa/quick-sort
