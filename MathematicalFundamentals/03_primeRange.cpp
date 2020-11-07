/* MathematicalFundamentals- Prime Numbers Range  */

#include<bits/stdc++.h>
using namespace std;

int isPrime[100];

void primeNumbers(int num){
	isPrime[1]=0;
	isPrime[0]=0;
	for(int i=2;i<=num;i++){
		isPrime[i]=1;
	}
	for(int i=2;i<(num/2);i++){
		if(isPrime[i]){
			for(int j=i*2;j<=num;j+=i){
				isPrime[j]=0;
			}
			cout<<endl;
		}
	}
}

int main(){
	int num;
	cout<<"Enter Number :";
	
	// These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>num;
	
	primeNumbers(num);
	for(int i=0;i<=num;i++){
		cout<<i<<"--"<<isPrime[i]<<endl;
	}
	
	
}
