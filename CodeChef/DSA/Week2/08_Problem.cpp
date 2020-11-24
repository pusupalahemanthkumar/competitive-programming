/* Codechef CHEFS IN QUEUE */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long ans=1;
	stack<pair<int,int> > s;
	s.push(make_pair(a[0],1));
	long long mod =1000000007;
	for(int i=1;i<n;i++){
		if(a[i]>=s.top().first){
		  s.push(make_pair(a[i],i));
			
		}else{
		
		while(!s.empty() && s.top().first>a[i]){
			pair<int,int> t= s.top();
			long long chaos = (i-t.second +1)%mod
			ans = (ans%mod *(chaos))%mod;
			s.pop();
		}
	}
	
		
	}
	cout<<ans<<endl;

	return 0;
}
