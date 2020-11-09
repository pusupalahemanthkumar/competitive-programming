/* WindowSliding Technique */

/* 
	Link : https://www.geeksforgeeks.org/window-sliding-technique/ 
	
	Question :
	Given an array of integers of size ‘n’.
    Our aim is to calculate the maximum sum of ‘k’ 
    consecutive elements in the array.
*/

#include<bits/stdc++.h>
using namespace std;

// TIME COMPLEXITY : O( K* N)
int bruteForce(int a[],int n,int k){
	int max_sum= INT_MIN;
	
	for(int i=0;i<n-k+1;i++){
		int cur_max=0;
		for(int j=0;j<k ;j++){
			cur_max =cur_max + a[i+j];
		}
		max_sum = max(cur_max,max_sum);
	}
	return max_sum;
	
}
//TIME COMPLEXITY : O (N)
int max_sum(int a[],int n,int k){
	if(n<k){
		cout<<"Invalid"<<endl;
		return -1;
	}
	
	int max_sum=0;
	//First Window sum
	for(int i=0;i<k;i++){
		max_sum+=a[i];
	}
	
	int cur_sum=max_sum;
	//Looping To Calculate Other Window Sums
	for(int i=k;i<n;i++){
		cur_sum+=a[i]-a[i-k];
		max_sum= max(max_sum,cur_sum);
	}
	
	
	return max_sum;
	
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"BruteForce :"<<bruteForce(a,n,k)<<endl;
	cout<<"WindowSlidingTechnique :"<<max_sum(a,n,k)<<endl;
	
	return 0;
	
	
}

