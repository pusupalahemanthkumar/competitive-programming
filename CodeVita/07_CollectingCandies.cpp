/* CodeVita- Collecting Candies  */
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int s=0;
		int cumSum[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
			cumSum[i]=s;
		}
		int res=0;
		for(int i=1;i<n;i++){
			res+=cumSum[i];
		}
		cout<<res<<endl;
		
		
	}
}
