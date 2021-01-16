/* 
find the area of the largest possible square that can be formed, 
given the side of a square tile (in cms) and the number of square tiles available? 

 */
/*

   5  8
   
   find perfect square =  [ 1 4 9 16]  ===> 4
   sqrt(8) === 2  ( 2*2 =4 )
   
   ans = (5*5) *(4)


*/
 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	int l,n;
 	cout<<"Enter the length and number of title avaialable :"<<endl;
 	cin>>l>>n;
 	
 	int sn = sqrt(n);
 	
 	cout<<"Max Area :"<<(l*l*sn*sn)<<endl;
 	
 	
 	return 0;
 }
