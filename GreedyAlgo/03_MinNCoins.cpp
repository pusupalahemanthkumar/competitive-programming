/* Greedy Algorithm to find Minimum number of Coins*/
/* link : https://www.geeksforgeeks.org/greedy-algorithm-to-find-minimum-number-of-coins/ */

#include<bits/stdc++.h>
using namespace std;

int deno[] ={
	1 , 2 , 5 , 10 , 20, 50, 100, 500, 1000
};
int n = sizeof(deno)/sizeof(deno[0]);

void minCoins(int num){
    //Sort Deno
	sort(deno,deno+n);
	
	vector<int> res;
	
	for(int i=n-1; i>=0; i--){
		while(num>=deno[i]){
			num-=deno[i];
			res.push_back(deno[i]);
		}
	}
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
	
}


int main(){
	int num;
	cin>>num;
	
	minCoins(num);
	
   return 0;
	
}
