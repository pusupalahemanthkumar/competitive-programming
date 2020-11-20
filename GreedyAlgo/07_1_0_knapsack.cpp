/* 1/0 Knapsack  */

#include<bits/stdc++.h>
using namespace std;

struct Item{
	int value,weight;
};

bool compare(Item a,Item b){
	return a.value > b.value;
}
int knapscak(Item a[],int w,int n){
	sort(a,a+n,compare);
	for(int i=0;i<n;i++){
		cout<<a[i].value<<" ";
	}
	cout<<endl;
	int res;
	int curW=0;
	int finalValue=0;
	
	for(int i=0;i<n;i++){
		if(curW+a[i].weight <= w){
			curW+=a[i].weight;
			finalValue+=a[i].value;
			
		}
	
	}
	return finalValue;	
}

int main(){
  int W,n;
	cin>>n>>W;
	Item a[n];
	for(int i=0;i<n;i++){
		int v,w;
		cin>>v>>w;
		a[i].value=v;
		a[i].weight=w;
	}
	
	cout<<"Maximum Value :"<<knapscak(a,W,n)<<endl;
	
	
	return 0;
}
