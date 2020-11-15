/* LeetCode- Rabbits in Forect  */
/* https://leetcode.com/problems/rabbits-in-forest/  */

#include<bits/stdc++.h>
using namespace std;

void show(map<int,int> m){
	for(map<int,int>::iterator i=m.begin() ;i!=m.end();i++){
		cout<<i->first<<"->"<<i->second<<endl;
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	
	vector<int> a;
	map<int,int> f;
	
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		a.push_back(t);
		f[a[i]]++;
	}
	show(f);
	
	/*
	 map 
	  1- > 2
	  2 -> 1
	  
	  res= 3; for ( 2->1)
	   group for 1 => 2/ (1+1) = 1
	   1* 2 = 2
	   
	   res = 3 +2 =5
	   
	   1->7
	     7/2 = 3group  =>  3 *2 = 6
	     7 % 2 = 1
	   
	  
	  
	
	*/5+5
	
	int res=0;
	for(map<int,int>::iterator i=f.begin();i!=f.end();i++){
	   if(i->first==0){
	   	res +=(i->second);
	   	
	   }
	   else if(i->first >= i->second ){
	   	res += (i->first +1);
	   }
	   else if(i->second %(i->first +1)==0){
	   	 res += i->second;
	   }else{
	   	 res += (i->second /(i->first+1))*(i->first +1);
	   	 res += (i->second % (i->first +1))*(i->first+1);
	   	 
	   }
	   
	
	}
	
	cout<<res<<endl;
	
	
	
	
	return 0;
}
