/* CodeChef DSA-- Chef and Street Food */

#include<bits/stdc++.h>
using namespace std;

int main(){
	// These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long res=0;
		for(int i=0;i<n;i++){
			long long p,s,v;
			cin>>s>>v>>p;
			res= max(res,(p/(s+1))*v);
		}
		cout<<res<<endl;
	}
	return 0;
	
}
