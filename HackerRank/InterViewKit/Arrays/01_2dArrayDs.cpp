/* HackerRank - 2D Array - DS */

#include<bits/stdc++.h>
using namespace std;

int hourglassSum(int a[][6]){
	int res=INT_MIN;

	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			int s= a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
			res = max(s,res);
		}
	}
	return res;
}

int main(){
	int a[6][6];
	
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cin>>a[i][j];
		}
	}
	
	cout<<"Result :"<<hourglassSum(a)<<endl;
	
	return 0;
	
	
}
