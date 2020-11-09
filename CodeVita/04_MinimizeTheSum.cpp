/*  CodeVita-2020 Minimize the sum  */

/*
Input

4 3

20 7 5 4

Output

17

Explanation

Operation 1 -> Select 20. Replace it by 10. New array = [10, 7, 5, 4]

Operation 2 -> Select 10. Replace it by 5. New array = [5, 7, 5, 4].

Operation 3 -> Select 7. Replace it by 3. New array = [5,3,5,4].

Sum = 17.

*/

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	long long n,k,temp,sum=0;
	
	cin>>n>>k;
	vector<int> v;
	
	for(int i=0;i<n;i++){
		cin>>temp;
		sum+=temp;
		v.push_back(temp);
	}
	// Converting Vector Container Into Max Heap.
	make_heap(v.begin(),v.end());
	
	for(int i=0;i<k;i++){
		
		long long maxi=v.front(); // returns MaxElement
		sum-=maxi;
		
		// Below Two Lines Deletes MaxElement
		pop_heap(v.begin(),v.end());
		v.pop_back();
		
		sum+=(maxi/2);
		
		//Below Two Lines Inserts Element
		v.push_back(maxi/2);
		push_heap(v.begin(),v.end());

		
	}
	cout<<sum<<endl;
	
}
