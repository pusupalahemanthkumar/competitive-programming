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


**Futher Resorces**
- [Intro To Algorithm Analysis](https://drive.google.com/file/d/0B-W-TWxgtybGd3dFUzg1OHNsM2M/view)
- [MCQS on TimeComplexity Analysis](https://discuss.codechef.com/t/multiple-choice-questions-related-to-testing-knowledge-about-time-and-space-complexity-of-a-program/17976)
- [Codechef DSA week 1](https://www.codechef.com/LRNDSA01?order=desc&sortBy=successful_submissions)

**TimeComplexity Analysis of Sorting Algorithms**

![alt TimeComplexity][images/sorting.png]

