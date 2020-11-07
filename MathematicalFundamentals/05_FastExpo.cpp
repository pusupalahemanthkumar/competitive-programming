/*  MathematicalFundamentals- FastExpo */

#include<bits/stdc++.h>
using namespace std;

long long power(long int a, long int n){
	// Case 1 : a^0 =1
	if(n==0){
		return 1;
	} else if(n==1) {  // case 2 : a^1 =a
	    return a;
	}else if(a==0){ // case 3 : 0^n =0
		return 0;
	}
	else{
		int r =power(a,n/2);
		
		if(n & 1){ // n is odd
		  return r * a * r;
			
		}else{  // n is even
		   return r*r;
			
		}
		
	}
	
	
}

int main(){
	long int num,p;
	cin>>num>>p;
	cout<<power(num,p);
	
	
	return 0;
}
