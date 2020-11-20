/* CodeChef ARRAYS-- Chef and Notebooks */

/* 
X Pages poetry
Y Pages left in  Notebook 
N notebooks
pi => pages of new book
ci => prices of new book
k => amount left

Input  Format :
T
X Y K N
pi   ci


3    1   2    2
3    4
2     2

if ( k > Ci ) :
 (Y+Pi) >= X     => LuckyChef


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	// These Two Lines Enables Faster i/O
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		int x,y,k,n;
		
		cin>>x>>y>>k>>n;
		int res=0;
		for(int i=0;i<n;i++){
			int p,c;
			cin>>p>>c;
			
			if( k >= c){
				if((y + p) >=x ){
					res=1;
				}
			}
			
		}
		res== 1 ? cout<<"LuckyChef"<<endl : cout<<"UnluckyChef"<<endl;
		
		
	}
	
	
	return 0;
}

