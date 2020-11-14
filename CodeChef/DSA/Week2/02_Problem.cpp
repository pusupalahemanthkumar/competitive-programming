/* CodeChef DSA--Penalty Shoot-Out II  */

#include<iostream>
using namespace std;
int main(){
    // These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long t;
	cin>>t;
	while(t--){
		long long n;
		string s;
		cin>>n;
		cin>>s;
		long long agoals=0,bgoals=0,ac,bc;
		long long res= 2*n;
		ac =bc= n;
		for(long long i=0;i<2*n;i++){
			if(i%2){
				bc--;
				if(s[i]=='1'){
					bgoals++;
				}
			}else{
				ac--;
				if(s[i]=='1'){
					agoals++;
				}
			}
			if(agoals > bgoals +bc || bgoals > agoals + ac){
				res = i+1;
				break;
			}
		}
		cout<<res<<endl;
		
	}
	return 0;
	
}
