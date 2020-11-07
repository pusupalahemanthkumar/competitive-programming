/* Sorting- BubbleSort Algorithm  */

#include<bits/stdc++.h>
using namespace std;

/*
   NOTES :
   
	Number Iterations(Outer) = n-1
	Example if there are 5 elememts then 4 iteration.
	And Number of swap decreases after each iteration
	(since the last element is already sorted)
	
   QUESTIONS:
   1. What is the total number of comparisons in a bubble sort?
   ANS => (n * (n-1) )/2
   
          It depends on how the data is arranged.

          For  n  items, this will give you a number of comparisons between  n-1  (already sorted) and  n(n-1)2  (inversely sorted).  
   
  2. Time Complexity
  Ans = > Best = O(n)
          Worst And Average = O(n ^2)

*/

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//Logic 
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j+1]<a[j]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
