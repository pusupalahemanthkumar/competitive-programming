/* CodeChef DSA-- Carvans */

// Time Complexity :  O(n)

#include<iostream>

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
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		//Main Logic Here.
		int res=0,prevSpeed=a[0];
		for(int i=0;i<n;i++){
			if(prevSpeed >=a[i]){
				res++;
				prevSpeed =a[i];
			}
			
		}
		cout<<res<<endl;
		
	}
	return 0;
}

