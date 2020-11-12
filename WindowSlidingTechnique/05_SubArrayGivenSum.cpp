/* Subarray with given sum  */
/*  https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0*/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		long long n,s;
		cin>>n>>s;
		
		long long a[n];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		
		int window_sum=0,start=0,end=0;
		
		/*
		 5  12
		 1 2 3 7 5
		 
		 10 15
		 1 2 3 4 5 6 7 8 9 10
	
		*/
		int state=0;
		for(int i=0;i<n;i++){
			
			window_sum+=a[i];
			
			if(window_sum > s){
				window_sum -= a[start];
				start++;
			}
			
			if(window_sum == s){
				state=1;
				end= i;
				break;
			}
			end=i;
			
		
		}
		if(state!=1){
			cout<<"-1"<<endl;
		}else{
			cout<<start+1<<" "<<end+1<<endl;
			
		}	
		
	}
	
}
