/*  LeetCode -Two Sum Problem   */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int t;
	cin>>t;

	int res[2];
	//Main Logic
	/*  Searching in map is  O(1) */
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		int num= a[i];
		int complement = t -a[i];
		unordered_map<int,int>::iterator it = m.find(complement);
		if(it != m.end()){
			res[0] =it->second;
			res[1]= i;
			break;
		}
		m[num]=i;
	}
	/*
	Brute Force Method -1
	int c=0;
	for(int i=0;i<n;i++){
		int s=a[i];
		for(int j=0;j<n;j++){
			if(i!=j){
				if(s+a[j]==t){
					res[0]=i;
					res[1]=j;
					c=1;
					break;	
				}
			}
		}
		if(c==1){
			break;
		}
	}
	
	
	*/
	cout<<res[0]<<" "<<res[1]<<endl;
	
	
	
	return 0;
}
