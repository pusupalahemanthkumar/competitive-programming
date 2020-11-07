/*  MathematicalFundamental- LCM AND HCF CONCEPT */

/*

 a x b = LCM(a, b) * GCD (a, b)

 LCM(a, b) = (a x b) / GCD(a, b) 

*/

#include<bits/stdc++.h>

using namespace std;
/*
    Example  15  25 =>75
    
    15 30 45 60 75
    25 50 75 100
    
    Example 15 20 =>60
    
    15 30 45 60 75
    20 40 60 80
    
    Example 2 4
    2 4 6
    4 8 12
    
    

*/

int lcm(int num1,int num2){
	
	int m = num1>num2 ? num1 : num2;
	cout<<m<<endl;
	int res =0;
	for(int i=m ;i<=num1*num2 ;i=i+m){
		if(i%num1==0 && i%num2==0){
			res=i;
			break;
		}else{
			continue;
		}
	}
	return res;	
}
/*
  Example 4  6  => 2
  4 => 1 2 4
  6 => 1 2 3 6

*/
int hcf(int num1,int num2){
	int m = num1 >num2 ? num2 : num1;
	int res;
	for(int i=1;i<=m;i++){
		
		if(num1%i==0 && num2%i==0){
			res=i;
		}
	}
	
	return res;
}
/* 
An efficient solution is to use Euclidean algorithm which is the main algorithm used for this purpose.
The idea is, GCD of two numbers doesn?t change if smaller number is subtracted from a bigger number.
*/
int EuclideanHcf(int num1,int num2){
	if(num1==0){
		return num2;
	}
	if(num2==0){
		return num1;
	}
	if(num1==num2){
		return num1;
	}
	if(num1 > num2){
		return EuclideanHcf(num1-num2,num2);
	}else{
		return EuclideanHcf(num1,num2-num1);
	}
	
}
int main(){
	int num1,num2;
	cout<<"Enter Numbers:";
	cin>>num1>>num2;
	cout<<"\nLCM :"<<lcm(num1,num2)<<endl;
	cout<<"\nLCM :"<<(num1*num2)/EuclideanHcf(num1,num2)<<endl;
	cout<<"\nHCF :"<<hcf(num1,num2)<<endl;
	cout<<"\nHCF :"<<EuclideanHcf(num1,num2)<<endl;
	
	return 0;
	
}

