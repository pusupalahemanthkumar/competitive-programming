/* Competitive Programming */
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int curmax=0,maxsum=0;
	for(int i=0;i<k;i++){
		curmax+=a[i];
	}
	for(int i=k;i<n;i++){
		curmax+=a[i]-a[i-k];
		maxsum=max(curmax,maxsum);
	}
	cout<<maxsum<<endl;
	

	
}
