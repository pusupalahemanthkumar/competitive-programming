/*  Stack --Infix To Prefix  */

#include<bits/stdc++.h>
using namespace std;

//Utility Functions
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

string strRev(string s){
	reverse(s.begin(),s.end());
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			s[i]=')';
		}else if(s[i]==')'){
			s[i]='(';
		}
	}
	return s;

	
}

int main(){
	
	string infix;
	cin>>infix;
	string res;
	string str=strRev(infix);
	stack<char> s;
	
	int k=-1;
	for(int i=0;str[i];i++){
			if(isOperand(str[i])){
				string t(1, str[i]);
				res.append(t);

				
			}else if(str[i]=='('){
				
				s.push(str[i]);
				
			}else if(str[i]==')'){
				
				while(!s.empty() && s.top()!='('){
					string t(1, s.top());
					res.append(t);

					s.pop();
				}
				s.pop();
				
			}else{
				while(!s.empty() && prec(str[i])<=prec(s.top())){
					string t(1, s.top());
					res.append(t);

					s.pop();
				}
				s.push(str[i]);
			}
			
		}
		while(!s.empty()){
			string t(1,s.top());
			res.append(t);
			s.pop();
		}	
   
	string ne = strRev(res);
	cout<<ne<<endl;
	
	return 0;
}


