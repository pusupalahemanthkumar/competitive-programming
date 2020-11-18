/*Fractional Knapsack Problem */

#include<bits/stdc++.h>
using namespace std;

struct Item{
	int value,weight;
};

//Utility Function
bool compare(Item a,Item b){
	double r1= (double)a.value/(double)a.weight;
	double r2= (double)b.value/(double)b.weight;
	return r1 > r2;
}
double fractionalKnapscak(Item a[],int w,int n){
	//Sorting Item on basis of ratios
	sort(a,a+n,compare);
	int curW=0;
	double finalValue=0.0;
	for(int i=0;i<n;i++){
		if(curW +a[i].weight <=w){
			curW += a[i].weight;
			finalValue += a[i].value;
		}
		else{
			int remainW = w-curW;
			finalValue += (a[i].value *(double)remainW)/(double)a[i].weight;	
			break;		
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
	
	cout<<"Maximum Value :"<<fractionalKnapscak(a,W,n)<<endl;
	
	
	return 0;
}
