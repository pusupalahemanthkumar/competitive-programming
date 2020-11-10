/* HackerRank - Repeated String*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin>>str;
	
	long long int n;
	cin>>n;
	long long int  res=0;
	int stringIndex=0;
	if(str.length()==1 && str[0]=='a'){
		cout<<n<<endl;
		
	}else{
        // Brute Force Method
//		int index=0;
//		for(long long i=1;i<=n;i++){
//			if(str[index]=='a'){
//				res++;
//			}
//			index++;
//			if(index>= str.length()){
//				index=0;
//			}
//		}
        long long int  c =0;
        for(int i=0;str[i];i++){
        	if(str[i]=='a'){
        		c++;
			}
		}
        int l= str.length();
        res= (n/l)*c;
        int m= n %l;
        for(int i=0;i<m && str[i];i++){
        	if(str[i]=='a'){
        		res++;
			}
		}
      	cout<<res<<endl;  
		
	}


}
