/*  CpdeChef DSA -- INFIX TO POSTFIX  */
#include<bits/stdc++.h>
using namespace std;

//Utility Function 
int prec(char ch){
	switch(ch){
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
	}
	return -1;
}
int isOperand(char ch){
	return (ch >='a' && ch<='z') || (ch>='A' && ch<='Z');
}

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n,k= -1;
		string str,res;
		cin>>n;
		cin>>str;
		
		stack<char> s;
		
		for(int i=0;i<n;i++){
			
			if(isOperand(str[i])){
				
				cout<<str[i];
				
			}else if(str[i]=='('){
				
				s.push(str[i]);
				
			}else if(str[i]==')'){
				
				while(!s.empty() && s.top()!='('){
					cout<<s.top();
					s.pop();
				}
				s.pop();
				
			}else{
				while(!s.empty() && prec(str[i])<=prec(s.top())){
					cout<<s.top();
					s.pop();
				}
				s.push(str[i]);
			}
			
		}
		while(!s.empty()){
			cout<<s.top();
			s.pop();
		}
		cout<<endl;	
	}
}

