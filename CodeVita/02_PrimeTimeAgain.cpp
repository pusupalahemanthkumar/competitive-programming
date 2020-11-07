/* CodeVita - PrimeTimeAgain */

#include<bits/stdc++.h>
using namespace std;

// Utility Function
bool isPrime(int n){
	if(n<=1){
		return false;
	}
	// Assume Prime Initially
	int flag=1;
	for(int i=2;i*i<n;i++){
		if(n %i==0){
			flag=0;
			break;
		}
		
	}
	return flag== 1? true : false;
	
}
int main(){
	int d,p;
	cin>>d>>p;
	
	int m= d/p;
	int res=0;
	for(int i=1;i<=m;i++){
		if(isPrime(i)){
			int c=1;
			for(int j=1;j<p;j++){
				
					int v = i+(j*m);
					if(isPrime(v)){
						c=1;
					}else{
						c=0;
						break;
					}
					
			}
			if(c==1){
				res++;
			}	
				
		}
	}
	
	cout<<res<<endl;
		
	
	
	return 0;
}
