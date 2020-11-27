/*Program for FCFS CPU Scheduling */
#include<bits/stdc++.h>
using namespace std;

struct Process{
	int bt;
	int order;
	string id;
	int wt;
	int tat;
};

bool compare(Process a,Process b){
	return a.order < b.order;
	
}
void findWaitingTime(Process a[],int n){
	a[0].wt=0;
	
	for(int i=1;i<n;i++){
		a[i].wt = a[i-1].bt +a[i-1].wt;
	}
}
void findTurnAroundTime(Process a[],int n){
	for(int i=0;i<n;i++){
		a[i].tat = a[i].bt + a[i].wt;
		
	}
}
void findavgTime(Process a[],int n){
	double total_wt=0,total_tat=0;
	
	findWaitingTime(a,n);
	findTurnAroundTime(a,n);
	
	cout<<"Processes "<<" Brut Time"<<" Waiting Time"<<" Turn Around Time"<<endl;
	
	for(int i=0;i<n;i++){
		total_wt +=a[i].wt;
		total_tat +=a[i].tat;
		cout<<" "<<a[i].id<<"   "<<a[i].bt<<"   "<<a[i].wt<<"   "<<a[i].tat<<"    "<<endl;
		
	}
	cout<<"Average waiting time :"<<(float)(total_wt)/(float)n;
	cout<<"Average turn around time :"<<(float)total_tat/(float)n;
	
	
	
}


int main(){
	int n;
	cin>>n;
	
	Process a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].id;
		cin>>a[i].bt;
		cin>>a[i].order;
	}
	sort(a,a+n,compare);
	
//	for(int i=0;i<n;i++){
//		cout<<a[i].order<<" ";
//	}
//	cout<<endl;
    findavgTime(a,n);

	
	
	
	return 0;
}
