/*			Window Sliding Technique		 */
/*

link : https://www.geeksforgeeks.org/find-a-subarray-of-size-k-whose-sum-is-a-perfect-square/

Find a subarray of size K whose sum is a perfect square

*/

#include<bits/stdc++.h>

using namespace std;

bool isPerfect(int n){
	double num = sqrt(n);
	
	return ((num-floor(num))==0);
}
void  subArrayPerfect(int a[],int n,int k){
	pair<int,int> res;
	
	int sum=0;
	
	for(int i=0;i<k;i++){
		sum+=a[i];
	}
	bool found =false;
	
	if(isPerfect(sum)){
		found =true;
		res.first=0;
		res.second =k-1;
	}else{
		
		for(int i=k;i<n;i++){
			sum += a[i]-a[i-k];
			
			if(isPerfect(sum)){
				found =true;
				res.first = i-k +1;
				res.second = i;
			}
			
	  }
		
	}
	
	if(found){
		for(int i=res.first;i<=res.second;i++){
		cout<<a[i]<<" ";
	    }
	    cout<<endl;
		
	}else{
		cout<<"-1"<<endl;
	}

}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	subArrayPerfect(a,n,k);
	
	return 0;

}
