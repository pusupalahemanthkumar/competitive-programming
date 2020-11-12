/* CodeVita- Railway Station      */
/*

INPUT FORMAT:
Trains
Start     Wait

Example :

3
10	2
5	10
13	5


Processing While Taking Input :

Start         End
10	12
5	15
13	18

Now Sort According To Finish Time :

10	12
5	15
13	18

Initially  res = Trains( Number of trains)

For First Trains Always Select One Station
c=0;
 i => point to first
Loop j =1 to Trains (n)

j=1  and i=1
 start [ j ] > end[ i]       false 

j =2  and i=1
start [ j ]  > end [ i ]    true
so  c++    and  i = j   
now c=1   i =2

j= 3  loop condition fails 

Finally res = res - c  ;



Example 2

2

2	4
6	2


2	6
6	8

res =2
c=0



*/

#include<bits/stdc++.h>
using namespace std;

struct Train{
	int start;
	int wait;
	int end;
};

bool comparison(Train a, Train b){
	return (a.end < b.end);
}

int main(){
	
	long int t;
	cin>>t;
	Train a[t];
	for(int i=0;i<t;i++){
		int s,w;
		cin>>s;
		cin>>w;
		a[i].start= s;
		a[i].wait=w;
		a[i].end= s+w;
	}
	
	sort(a,a+t,comparison);
	
	int res= t;
	int i=0;  // First One 
	int c=0;
	for(int j=1; j<t ;j++){
		if(a[j].start > a[i].end){
			i=j;
			c++;
		}
		
	}
	
	cout<<res-c<<endl;
	
	
	
	
	
}
