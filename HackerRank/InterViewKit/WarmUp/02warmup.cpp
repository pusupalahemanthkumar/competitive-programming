/* HackerRank -Counting Valleys*/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int steps;
	string str;
	
	cin>>steps;
	cin>>str;
	
	int valleyCount=0;
	int level=0;
	
	for(int i=0;str[i];i++){
		if(str[i]=='U'){
			if(level==-1){
				valleyCount++;
			}
			level++;
		}else{
			level--;
		}
	}
	cout<<valleyCount<<endl;
	return 0;
	
}
