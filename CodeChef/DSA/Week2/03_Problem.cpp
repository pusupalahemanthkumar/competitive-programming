/*  CodeChef DSA-- Stupid Machine */

#include<bits/stdc++.h>
using namespace std;

int main(){
	// These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long  t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		
		for(long long i=0;i<n;i++){
		    cin>>a[i];	
		}
		long long TokenCount=0,minBox=a[0];
		for(long long i=0;i<n;i++){
			if(a[i]<minBox){
				minBox=a[i];
			}
			TokenCount+=minBox;
		}
		cout<<TokenCount<<endl;
	}
	return 0;
}
