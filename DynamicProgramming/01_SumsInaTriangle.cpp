/* CodeChef ARRAYS--Sums in a Triangle   */

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
		
		int a[n][n];
		
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				cin>>a[i][j];
			}
		}
		
		for(int i=n-1;i>=1;i--){
			for(int j=0;j<=i-1;j++){
				if(a[i][j] > a[i][j+1]){
					a[i-1][j] += a[i][j];
				}else{
					a[i-1][j] += a[i][j+1];
				}
			}
		}
		cout<<a[0][0]<<endl;
		
	}
	
	
	return 0;
}
