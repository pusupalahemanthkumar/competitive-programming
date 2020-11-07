/* MathematicalFundamentals- Prime Numbers  */

#include<bits/stdc++.h>
using namespace std;

/*
   LOGIC : 
   TimeComplexity O(sqrt(M))
   let m be Number
   m= a* b  then m is not prime number
   b= m /a
   Assume a <= b 
   Then  a * a <= a * b
   a * a <= m  
*/

bool isPrime(int m){
	if(m<=1){
		return false;
	}
	//Assume m is prime number initially
	int flag=1;
	for(int i=2;i*i<=m ;i++){
		if(m%i==0){
			flag=0;
			break;
		}
	}
	return flag==1 ? true : false;
	
}
bool burteForceMethod(int m){
	if(m<=1){
		return false;
	}
	int flag=1;
	for(int i=2;i<m;i++){
		if(m%i==0){
			flag=0;
			break;
		}
	}
	return flag==1 ? true : false;
	
}

int main(){	
	

	int n;
	
	cout<<"Enter Number :";
	
	// These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	
	cout<<isPrime(n)<<endl;
	cout<<burteForceMethod(n)<<endl;
	
	return 0;
}
