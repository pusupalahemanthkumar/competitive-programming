/* CodeChef DSA-- Factorial  */

#include<iostream>
/*

  n! = 1 * 2 * 3 * 4 * 5* ..... * n
  
  Example  30
   1	11	21
   2	12  22
   3    13  23
   4    14  24
   5    15  25
   6    16  26
   7    17  27
   8    18  28
   9    19  29
   10   20  30
   
  result = lower(n /5) + lower(n/5^2) ... + 0
*/

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		
		// Main Logic Here
		long long res=0,base=5;
		while(base<=n){
			res +=(n/base);
			base*=5;	
		}
		cout<<res<<endl;	
	}
	return 0;
	
}
