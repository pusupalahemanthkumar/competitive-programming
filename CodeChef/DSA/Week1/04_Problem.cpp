/* CodeChef DSA--  Smart Phone */

#include<iostream>
#include<algorithm>

// Time Complexity :  O(n)

using namespace std;

int main(){
	// Declaring Variables Here.
	long long n,curmax=0,endmax=0;
	
	// Getting Input Here
	cin>>n;
	long long a[n];
	
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// Main Logic Here.
	sort(a,a+n);
	for(int i=0;i<n;i++){
		endmax=a[i]*(n-i);
		if(curmax<endmax){
			curmax=endmax;
		}
	}
	cout<<curmax<<endl;
	
}
