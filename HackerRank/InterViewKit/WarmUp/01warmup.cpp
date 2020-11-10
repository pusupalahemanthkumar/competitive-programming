/* HackerRank -Sales by Match */

#include<bits/stdc++.h>

using namespace std;

int main(){
	// These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	int a[n];
	map<int,int> f;
	for(int i=0;i<n;i++){
		cin>>a[i];
		f[a[i]]++;
	}
	
	int res=0;
    for(map<int,int>::iterator i=f.begin();i!=f.end();i++){
    	res+=(i->second / 2);
	}
    cout<<res<<endl;
	return 0;
}
