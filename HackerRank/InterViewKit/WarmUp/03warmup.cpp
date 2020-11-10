/* HackerRank - Jumping on the Clouds */
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int res=-1;
	if(n==2){
		if(a[0]==0 && a[1]==0){
			res=1;
		}
	}else{
	  for(int i=0;i<n;){
		if(a[i]==0){
			if(a[i+2]==0){
				i=i+2;
			}else if(a[i+1]!=1){
				i=i+1;
			}
			res++;
		}
	}
		
	}

	cout<<res<<endl;
	return 0;
}
