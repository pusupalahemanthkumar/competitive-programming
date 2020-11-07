/* 
 MathematicalFundamentals-  Pigeonhole Principle.
 
Count of subarrays of size K having at least one pair 
with absolute difference divisible by K-1

links : https://www.geeksforgeeks.org/count-of-subarrays-of-size-k-having-at-least-one-pair-with-absolute-difference-divisible-by-k-1/


Efficient Approach: The above approach can be optimized using Pigeonhole Principle. Follow the steps below to solve the problem:

Consider K-1 boxes labeled 0, 1, 2, …, K-2 respectively. 
They represent the remainders when any number x from the array is divided by K-1, which means the boxes store the modulo K-1 of array elements.
Now, in a subarray of size K, according to the Pigeonhole Principle, there must be atleast one pair of boxes with same remainders. 
It means that there is atleast one pair whose difference or even the summation will be divisible by K.
From this theorem we can conclude that every subarray of size K, will always have atleast one pair whose difference is divisible by K-1.
So, the answer will be equal to the number of subarrays of size K possible from the given array, which is equal to N – K + 1.

*/
#include<bits/stdc++.h>

using namespace std;

int findSubArrays(int a[], int n,int k){
	return n-k+1;
}

int main(){
	int n,k;
	cout<<"Enter Size :"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter Value Of K: "<<endl;
	cin>>k;
	cout<<findSubArrays(a,n,k);
	return 0;
	
}
