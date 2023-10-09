# Find Index
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an unsorted array <strong>Arr[]</strong> of <strong>N</strong> integers and a <strong>Key</strong> which is present in this array. You need to write a program to find the <strong>start index</strong>( index where the element is first found from left in the array ) and <strong>end index</strong>( index where the element is first found from right in the array ).If the key does not exist in the array then return -1&nbsp;for both start and end index in this case.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 6
arr[] = { 1, 2, 3, 4, 5, 5 }
Key = 5
<strong>Output:</strong>  4 5
<strong>Explanation</strong>:
5 appears first time at index 4 and
appears last time at index 5.
<strong>(0 based indexing)</strong>
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N=6
arr[] = { 6, 5, 4, 3, 1, 2 }
Key = 4
<strong>Output:</strong>  2 2 
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
Since, this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>findIndex()</strong> that takes<strong> array a, integer N&nbsp;and integer key&nbsp;</strong>as parameters<strong>&nbsp;</strong>and returns an array of length 2 in which at first index contains the value of start index and at the second index contains the value of end index. If the key does not exist in the array then return -1&nbsp;for both start and end index in this case.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1).</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>6</sup></span></p>
</div>