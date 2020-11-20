/* CodeChef ARRAYS-- Little Elephant and Candies */

#include<bits/stdc++.h>
using namespace std;
int main(){
	// These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		for(int i=0;i<n;i++){
			int t;
			cin>>t;
			c-=t;
		}
		if(c <= -1){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}

}
