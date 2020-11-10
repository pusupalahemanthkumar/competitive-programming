/* Recursion - Staircase Problem */
/*
There's a staircase with N steps, and you can climb 1 or 2 steps at a time. Given N, write a function that returns the number of unique ways you can climb the staircase. The order of the steps matters.

For example, if N is 4, then there are 5 unique ways:

1, 1, 1, 1
2, 1, 1
1, 2, 1
1, 1, 2
2, 2


*/

#include<bits/stdc++.h>
using namespace std;

// steps 1 2
int stairCase(int n){
	// n=0 and n=1 no.of ways =1 ( base case)
	if(n<=1){
		return 1;
	}
	return stairCase(n-1) +stairCase(n-2);
	
}
// steps 1 3 5
int stairCase1(int n){
	// n=0 and n=1 no.of ways =1 ( base case)
	
	if(n==1 || n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	return stairCase1(n-1) + stairCase1(n-3)+ stairCase1(n-5);
	
}

int genralization(int a[],int n,int k){
   if(n==0 || n==1){
   	return 1;
   }
   if(n<0){
   	return 0;
   }
   int t=0;
   for(int i=0;i<k;i++){
   	t=t+genralization(a,n-a[i],k);
   }
   return t;
   
}


int main(){
	int n,k;
    cin>>n>>k;
    int a[k];
    for(int i=0;i<k;i++){
    	cin>>a[i];
	}
    //cout<<"Result :"<<stairCase(n)<<endl;
	//cout<<"Result1 :"<<stairCase1(n)<<endl;
	
	cout<<"Result :"<<genralization(a,n,k)<<endl;
	
	return 0;
}
