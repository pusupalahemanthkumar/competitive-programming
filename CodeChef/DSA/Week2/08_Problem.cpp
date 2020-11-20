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
	int ans=1;
	stack<pair<int,int> > s;
	for(int i=0;i<n;i++){
		while(!s.empty() && s.top().first>a[i]){
			pair<int,int> t= s.top();
			int chaos = i-t.second +1;
			ans*=chaos;
			ans%=(1000000007);
			s.pop();
		}
		s.push(make_pair(a[i],i));
		
	}
	cout<<ans<<endl;

	return 0;
}
