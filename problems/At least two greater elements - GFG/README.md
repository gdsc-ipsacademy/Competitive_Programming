# At least two greater elements
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of <strong>N</strong> distinct elements, the task is to find all elements in array except two greatest elements in sorted order.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input : </strong>
a[] = {2, 8, 7, 1, 5}
<strong>Output :</strong>
1 2 5 
<strong>Explanation :</strong>
The output three elements have two or
more greater elements.   
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
a[] = {7, -2, 3, 4, 9, -1}
<strong>Output :</strong>
-2 -1 3 4</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>findElements()</strong>&nbsp;which takes the array <strong>A[]</strong> and its size <strong>N </strong>as inputs and return the vector sorted values denoting the elements in array which have at-least two greater elements than themselves.<br>
<br>
<strong>Expected Time Complexity:</strong> O(N*Log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(N)<br>
<br>
<strong>Constraints:</strong><br>
3 ≤ N ≤ 10<sup>5</sup><br>
-10<sup>6</sup> ≤ A<sub>i</sub> ≤ 10<sup>6</sup></span></p>
</div>