/*LeetCode - Find All Anagrams in a String */

/* 
link :  https://leetcode.com/problems/find-all-anagrams-in-a-string/

*/

#include<bits/stdc++.h>
#include<cstring>

using namespace std;

//Utility Functions
bool compare(int a[],int b[]){
	for(int i=0;i<26;i++){
		if(a[i]!=b[i]){
			return false;
		}
	}
	return true;

}
void search(string pat,string txt){
	// Length
	int m = pat.length();
	int n = txt.length();
	
	// Frequencies Arrays
	int countP[26]={0} ;
	int countTw[26]={0};
	
	//First Window 
	for(int i=0;i<m;i++){
		int x= pat[i]-'a';
		countP[x]++;
		int y= txt[i]-'a';
		countTw[y]++;
	}
	
	for(int i=m; i<n ; i++){
		if(compare(countP,countTw)){
			cout<<"Found at Index :"<<(i-m)<<endl;
		}
		int x=txt[i]-'a';
		int y = txt[i-m]-'a';
		//Add current Char to current window
		countTw[x]++;
		// Removing first char of previous window
		countTw[y]--;
		
	}
	if(compare(countP,countTw)){
		cout<<"Found at Index :"<<(n-m)<<endl;
	}
	
	
}

int main(){
    string str,pat;
    cin>>str;
    cin>>pat;
	
	search(pat,str);
	
	
	return 0;
}

