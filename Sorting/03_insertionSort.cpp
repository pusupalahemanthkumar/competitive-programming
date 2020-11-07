/* Sorting- SelectionSort Algorithm  */

#include<bits/stdc++.h>
using namespace std;

/*
   NOTES :
   
	
	
   QUESTIONS:
   1. What is the total number of comparisons in a bubble sort?
   ANS => (n * (n-1) ) ~ n ^2
   
        
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
   int flag=0,i,j;
	for(i=1;i<=n-1;i++){
		int t=a[i];
		flag=0;
		for(j=i-1;j>=0;j--){
			if(a[j]>t){
				a[j+1]=a[j];
				flag=1;
			}else{
				break;
			}
		}
		if(flag){
			a[j+1]=t;
			
		}
	}
	
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
