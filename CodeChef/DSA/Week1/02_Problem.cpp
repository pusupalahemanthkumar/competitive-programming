/* CodeChef DSA--Reverse The Number  */

// Time Complexity :  log10(n)
//  Maths Formula :  (n/ (10^x)) =1
// n = 10 ^x 
// log10(n) = x

#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int rev=0,r;
		while(num>0){
			r=num%10;
			num=num/10;
			rev=rev*10+r;
		}
		cout<<rev<<endl;
	}
}
