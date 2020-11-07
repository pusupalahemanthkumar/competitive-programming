/* MathematicalFundamentals- Prime Factorization  */

#include<bits/stdc++.h>
using namespace std;

int f[100],e[100],len=-1;

void primeFactorization(int num){
	//	Time Complexity O(sqrt(m))
	int d=2;
	// Untill Not Prime
	while(num >1 && d*d <= num){
		int k=0;
		while(num % d==0){
			k++;
			num= num/d;
		}
		if(k >0){
			len++;
			f[len]=d;
			e[len]=k;
		}
		d++;
	}
	// If Prime Number Found At Last
	if(num >1){
		len++;
		f[len]=num;
		e[len]=1;
	}
}

void bruteForce(int m){
//	Time Complexity O(m) for prime Number
	int d=2;
	while(m>1){
		int k=0;
		while(m%d==0){
			m= m/d;
			k++;
		}
		if(k>0){
			len++;
			f[len]=d;
			e[len]=k;
		}
		d++;
	}
}

int main(){
	int num;
	cout<<"Enter Number :";
	// These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>num;
	
	bruteForce(num);
	
	for(int i=0;i<=len;i++){
		cout<<f[i]<<"^"<<e[i]<<endl;
	}
	cout<<endl;
	
	len=-1;
	primeFactorization(num);
	
	for(int i=0;i<=len;i++){
		cout<<f[i]<<"^"<<e[i]<<endl;
	}
	
	return 0;
}
