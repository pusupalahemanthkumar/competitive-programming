/* Memoization (Top Down )  Fibonacci Number. */

#include<bits/stdc++.h>
using namespace std;
#define NIL -1

int lookUp[100];
void initialize(){
	for(int i=0;i<100;i++){
		lookUp[i]=NIL;
	}
}
int fib(int n){
	if(lookUp[n]==NIL){
		if(n <= 1){
			lookUp[n]=n;
		}else{
			lookUp[n]= fib(n-1) +fib(n-2);
		}
	}
	return lookUp[n];
}



int main(){
	int n;
	cin>>n;
	initialize();
	cout<<"Result :"<<fib(n)<<endl;
	
}
