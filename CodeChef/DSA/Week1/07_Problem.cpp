/*  CodeChef DSA-- Coin Flip */

#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int g;
		cin>>g;
		while(g--){
			long long n;
			int i,q;
			cin>>i>>n>>q;
			
			// Best Method
			int ans =n/2;
			if(i==1 && q==1){
				ans=ans;
			}else if(i==1&& q==2){
				ans=n-ans;
				
			}else if(i==2 && q==1){
				ans=n-ans;
			}else{
				ans =ans;
			}
			cout<<ans<<endl;
			
			// Burute Force Method
//			int a[n] ={0};
//					  
//			int headCount= i==1 ? n : 0;
//			int tailCount = i==2 ? n:0;
//			
//			// head - 0 tail - 1
//			for(int k=0;k<n;k++){
//				for(int j=0;j<=k;j++){
//					if(a[j]==0){
//						a[j]=1;
//						headCount--;
//						tailCount++;
//					
//					}else if(a[j]==1){
//						a[j]=0;
//						headCount++;
//						tailCount--;
//					
//					}
//				
//				}
//			}
//			q==1 ? cout<<headCount<<endl : cout<<tailCount<<endl;
			
		}
	}
	
	
	return 0;
} 
