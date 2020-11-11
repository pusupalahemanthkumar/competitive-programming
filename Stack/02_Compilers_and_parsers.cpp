/* CodeChef DSA-- Compilers and parsers */

#include<bits/stdc++.h>
using namespace std;

int main(){
	// These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		
		string str;
		cin>>str;
		
		stack<char> s;
		int res=0;
		
		for(long long i=0;i<str.length();i++){
			if(str[i]=='<'){
				s.push(str[i]);
			}else if(str[i]=='>' && !s.empty()){
				s.pop();
				if(s.empty()){
					res= i+1;
				}
				
			}else{
				break;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
