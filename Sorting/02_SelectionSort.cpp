/* Sorting- SelectionSort Algorithm  */

#include<bits/stdc++.h>
using namespace std;

/*
   NOTES :
   
	In Selection Sort top element is sorted after every iteration.
	
   QUESTIONS:
   1. What is the total number of comparisons in a bubble sort?
   ANS => (n * (n-1) )/2
   
        
   
  2. Time Complexity
  Ans = > 
          Best Worst And Average = O(n ^2)

*/

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//Logic 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
