/* CodeVita - kth largest factor of N  */

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	int k;
	cin>>n>>k;
	int c=0;
	// Brute Force Method
//	for(long long i=n;i>=1;i--){
//		if(n % i ==0){
//			c++;
//		}
//		if(c==k){
//			cout<<i<<endl;
//			break;
//		}
//	}
//	if(c<k){
//		cout<<1<<endl;
//	}
	
	vector<int> a;
	int res=0;
	for(int i=1; i*i<n;i++){
		if(n % i ==0){
			c++;
		}
		if(c==k){
			res= n/i;
			break;
		}
		a.push_back(i);
	}
	
	if(c*2 <=k){
		cout<<1<<endl;
	}else if (res==0){
		int left =k-c;
		int resIndex= a.size()-left;
		cout<<a[resIndex]<<endl;
	}else{
		cout<<res<<endl;
	}
	
	
	return 0;
} 
