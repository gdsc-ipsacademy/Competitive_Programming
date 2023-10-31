# Kadane's Algorithm

Kadane's Algorithm is a simple approach for finding the maximum sum of a continuous subarray in an array.

## Steps

1. Initialize two variables: `res` and `sum`. `res` stores the maximum sum found so far, and `sum` keeps track of the current subarray sum.

2. Iterate through each element of the array one by one.

3. For each element, add it to `sum` to build the sum of the current subarray.

4. Update `res` if `sum` becomes larger than the current `res`. This remembers the maximum sum encountered so far.

5. If `sum` becomes negative, reset it to zero. This is essential because a negative sum suggests that the current subarray doesn't contribute positively to the overall sum, so it's better to start a new subarray.

6. Continue these steps for all elements in the array.

7. After the loop, `res` holds the maximum sum of a contiguous subarray within the array.

In simpler terms, Kadane's Algorithm scans through the array, keeps track of the current subarray's sum, and remembers the maximum sum it has seen. If the current subarray sum becomes negative, it resets the sum to zero, indicating the start of a new potential maximum subarray. Finally, it reports the maximum sum found in the entire array.
