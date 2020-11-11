/* Introduction To Stack In C++ STL */

#include<bits/stdc++.h>
using namespace std;

void show(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
		
	}
	
}

int main(){
	int n;
	cin>>n;
	stack<int> s;
	
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		s.push(t);
	}
	cout<<"Stack Size "<<s.size()<<endl;
	cout<<"Stack Data"<<endl;
	show(s);
	s.pop();
	cout<<"Stack Size "<<s.size()<<endl;
	cout<<"After Pop()"<<endl;
	show(s);
	
	return 0;
	
	
}
