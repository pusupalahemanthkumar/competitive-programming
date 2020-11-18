/* CodeChef- Matched Brackets */
/* Not Completed */

#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stack<int> s;
	
	int depth=0, len=0,begin_idx=0;
	int  max_depth=0, max_depth_idx=0, max_len=0,max_len_idx=0;
	for(int i=0;i<n;i++){
		if(a[i]==1){
			s.push(a[i]);
			if(s.size()==0){
				depth=1;
				len=1;
				begin_idx=i+1;
			}else{
				depth=depth+1;
				len=len+1;
			}
				
		}else if(a[i]==2){
			s.pop();
			depth--;
			len++;
		}
		
	
		
	}
	
	
	
	
}
