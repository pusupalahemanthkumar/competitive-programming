/* HackerRank -Arrays: Left Rotation */

#include<bits/stdc++.h>
using namespace std;

vector<int> leftRot(vector<int> a,int d){
	vector<int> res;
	
	for(vector<int>::iterator i =a.begin()+d; i!=a.end();i++){
		res.push_back(*i);
	}
	for(vector<int>::iterator i= a.begin(); i!=a.begin()+d;i++){
		res.push_back(*i);
	}
	for(vector<int>::iterator it =res.begin();it!=res.end();it++){
		cout<<*it<<" ";
	}

	return res;
}

int main(){
	long int n, r;
	cin>>n>>r;
	
	vector<int> a;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	vector<int> res=leftRot(a,r);

	
	for(vector<int>::iterator it =res.begin();it!=res.end();it++){
		cout<<*it<<" ";
	}

	cout<<endl;
	
	return 0;
	
	
}
