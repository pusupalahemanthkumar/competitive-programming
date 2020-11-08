/*  CodeChef DSA--Lapindromes */

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		// Variables Declaration Here
		char str[2000];
		int start1=0,start2,end1;
		int freq1[26]={0},freq2[26]={0};
		
		// Getting Input
		cin>>str;
		
		int n=strlen(str);
		
		// Main Logic Here
		
		if( 1& n){
			start2= (n+1)/2;
			end1=start2-1;
		}else{
			start2= n/2;
			end1=start2;
		}
		
		while(start1<end1){
			int x=str[start1]-'a';
			freq1[x]++;
			start1++;
		}
		while(start2<n){
			int x= str[start2]-'a';
			freq2[x]++;
			start2++;
		}
		int res=0;
		for(int i=0;i<26;i++){
			if(freq1[i]==freq2[i]){
				res=1;
			}else{
				res=0;
				break;
			}
		}
		
		res?cout<<"YES"<<endl : cout<<"NO"<<endl;
	}
	return 0;
}
