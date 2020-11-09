/* GREEDY ALGORITHM - Job Sequencing Problem */

#include<bits/stdc++.h>
using namespace std;

struct Job{
	char id;
	int dead;
	int profit;
};

// Utility Function
bool comparison(Job a, Job b){
	// Sorting In Descending Order.
	return a.profit > b.profit;
}
int MaxProfit(Job a[],int n){
	// Sorting Jobs According To Max Profits
	sort(a,a+n,comparison);
	
	int result[n],res=0;
	bool slot[n];
	
	// Initially All Slots Are Free.
	for(int i=0;i<n;i++){
		slot[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=min(n,a[i].dead)-1; j>=0;j--){
			if(slot[j]==false){
				result[j]=i;
				slot[j]=true;
				break;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		if(slot[i]== true){
			cout<<a[result[i]].id<<endl;
			res+=a[result[i]].profit;
		}
	}
	
	return res;
}


int main(){
	int n;
	cin>>n;
	Job a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].id;
		cin>>a[i].dead;
		cin>>a[i].profit;
	}
	cout<<"Result :"<<MaxProfit(a,n)<<endl;
	return 0;
	
}
