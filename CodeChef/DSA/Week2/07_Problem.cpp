/* CodeChef DSA-- Not All Flavours  */

#include<bits/stdc++.h>

using namespace std;

int main(){
	// These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		
		int n,k;
		cin>>n>>k;
		
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		int f=0,c=0,m=0;
		map<int,int>u;
		
		for(int i=0;i<n;i++){
			u[a[i]]++;
			c++;
			if(u.size()<k){
				if(m < c){
					m=c;
				}
			}
			else if(u.size()==k){
				map<int,int>::iterator it = u.find(a[f]);
				u[a[f]]--;
				if(it->second ==0){
					u.erase(it);
				}
				f++;
				c--;
	
			}
		}
		cout<<m<<endl;
		
		
	}
	return 0;
}
