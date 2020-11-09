# Competitive Programming

### What is an Algorithm ?

An algorithm is a set of well-defined instructions in sequence to solve a problem.
Informally, an algorithm is nothing but a mention of steps to solve a problem. 
They are essentially a solution.


### Asymptotic Analysis

The efficiency of an algorithm depends on the amount of time, storage and other resources required to execute the algorithm. 
The efficiency is measured with the help of asymptotic notations.

An algorithm may not have the same performance for different types of inputs. 
With the increase in the input size, the performance will change.

The study of change in performance of the algorithm with the change in the order of the input size is defined as asymptotic analysis.

Asymptotic notations are the mathematical notations used to describe the running time of an algorithm when the input tends towards a particular value or a limiting value.

For example: In bubble sort, when the input array is already sorted, the time taken by the algorithm is linear i.e. the best case.

But, when the input array is in reverse condition, the algorithm takes the maximum time (quadratic) to sort the elements i.e. the worst case.

When the input array is neither sorted nor in reverse order, then it takes average time. These durations are denoted using asymptotic notations.

There are mainly three asymptotic notations: Theta notation, Omega notation and Big-O notation.



#### Theta Notation (Θ-notation)
> It is used for analyzing the average case complexity of an algorithm.

#### Big-O Notation (O-notation)
> It gives the worst case complexity of an algorithm.

#### Omega Notation (Ω-notation)
> It provides best case complexity of an algorithm.

**NOTE**

A rule of thumb is that our computers do roughly 10^8 operations per second (this value gets outdated really fast). So to check whether our solution is correct, the first step is to ensure that the time complexity is good enough to meet the timing requirements of the problem (usually the time limit is 1 second). To do this, first calculate the worst case time using big O notation. Substitute the constraints and check if the value <= 10^8.
For eg. our algorithm has a complexity of O(n^2) and n <= 10^6. Substituting n yields roughly 10^12 operations. Do note that this is not the exact number of operations, rather a rough estimate. Since 10^12 is much much bigger than 10^8, we can safely conclude that our algorithm won't run in under 1 second.


**Further Resources**
- [Intro To Algorithm Analysis](https://drive.google.com/file/d/0B-W-TWxgtybGd3dFUzg1OHNsM2M/view)
- [MCQS on TimeComplexity Analysis](https://discuss.codechef.com/t/multiple-choice-questions-related-to-testing-knowledge-about-time-and-space-complexity-of-a-program/17976)
- [Codechef DSA week 1](https://www.codechef.com/LRNDSA01?order=desc&sortBy=successful_submissions)

**TimeComplexity Analysis of Sorting Algorithms**

![alt TimeComplexity](images/sorting.png)



### Window Sliding Technique

This technique shows how a nested for loop in some problems can be converted to a single for loop to reduce the time complexity.

```
Given an array of integers of size ‘n’.
Our aim is to calculate the maximum sum of ‘k’ 
consecutive elements in the array.

Input  : arr[] = {100, 200, 300, 400}
         k = 2
Output : 700

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
         k = 4 
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23}
of size 4.

Input  : arr[] = {2, 3}
         k = 3
Output : Invalid
There is no subarray of size 3 as size of whole
array is 2.

```

The technique can be best understood with the window pane in bus, consider a window of length n and the pane which is fixed in it of length k. Consider, initially the pane is at extreme left i.e., at 0 units from the left. Now, co-relate the window with array arr[] of size n and pane with current_sum of size k elements. Now, if we apply force on the window such that it moves a unit distance ahead. The pane will cover next k consecutive elements.

Consider an array arr[] = {5, 2, -1, 0, 3} and value of k = 3 and n = 5

Applying sliding window technique :

We compute the sum of first k elements out of n terms using a linear loop and store the sum in variable window_sum.
Then we will graze linearly over the array till it reaches the end and simultaneously keep track of maximum sum.
To get the current sum of block of k elements just subtract the first element from the previous block and add the last element of the current block .

**Practice Question (Window Sliding Technique)**
- [Question 1](https://www.codechef.com/LRNDSA02/problems/NOTALLFL)
- [Question 2](https://www.geeksforgeeks.org/find-a-subarray-of-size-k-whose-sum-is-a-perfect-square/)