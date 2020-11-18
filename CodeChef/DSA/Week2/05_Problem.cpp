/* CodeChef DSA- Matched Brackets */

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
	int depth,max_depth=0;
	int len ,max_len=0;
	int first_depth_idx;
	int max_len_pos;
	int begin_depth;
	
	for(int i=0;i<n;i++){
		if(a[i]==1){
			if(s.size()==0){
				depth=1;
				len=1;
				begin_depth=i+1;
			}else{
				depth+=1;
				len+=1;
				
			}
			s.push(a[i]);
		}else if(a[i]==2){
			depth-=1;
			len+=1;
			s.pop();
		}
		if(depth>max_depth){
			max_depth=depth;
			first_depth_idx=i+1;
		}
		if(len >max_len){
			max_len=len;
			max_len_pos=begin_depth;
		}
		
	}
	cout<<max_depth<<" "<<first_depth_idx<<" "<<max_len<<" "<<max_len_pos<<endl;
	
	
	return 0;
}
