/* GREEDY ALGORITHM - Activity Selection Problem */

#include<bits/stdc++.h>
using namespace std;

struct Activity{
	int start, finish;
};

// Utility Function
bool activityCompare(Activity s1, Activity s2){
	return (s1.finish < s2.finish);
}

// Main Logic
int printMax(Activity a[],int n){
	// Sorting According To Finish Time
	sort(a,a+n,activityCompare);
	
	int i =0;
	cout<<"selected Activities :"<<endl;
	// First Activity is Selected Always
	cout<<a[i].start<<" "<<a[i].finish<<endl;
	int res=1;
	for(int j=1;j<n;j++){
		if(a[j].start >=a[i].finish){
			cout<<a[j].start<<" "<<a[j].finish<<endl;
			i=j;
			res++;
		}
	}
	
	return res;
	
	
}

int main(){
	int n;
	cin>>n;
	Activity a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].start;
		cin>>a[i].finish;
	}
	cout<<"Max :"<<printMax(a,n)<<endl;
	return 0;
	
	
}


