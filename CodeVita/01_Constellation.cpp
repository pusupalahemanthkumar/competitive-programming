/* CodeVita -Constellation */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	//Getting Input
	cin>>n;
	
	char x[3][n];
	
	//Getting Inputs
	for(int i=0;i<3;i++){
		for(int j=0;j<n;j++){
			cin>>x[i][j];
		}
		
	}
	
	int y;
	//Main Logic
	for(int i=0;i<n;i++){
		if(x[0][i]=='#' && x[1][i]=='#' && x[2][i]=='#' ){
			cout<<"#";
		}else if(x[0][i]=='.' && x[1][i]=='.' && x[2][i]=='.'){
			//DO Nothing
		}else{
			char a, b, c, a1, b1, c1, a2, b2, c2;
			y=i;
			
			// First Row
			a=x[0][y];
			b=x[0][y+1];
			c=x[0][y+2];
			
			//Secound Row
			a1= x[1][y];
			b1= x[1][y+1];
			c1= x[1][y+2];
			
			//Third Row
			a2= x[2][y];
			b2= x[2][y+1];
			c2= x[2][y+2];
			
			if(a=='.' && b=='*' && c=='.' && a1=='*' && b1=='*' && c1=='*' && a2=='*' && b2=='.' && c2=='*')
	  		{  		
      			cout<<"A";
      		  	i = i + 2;
      		}
      		if(a=='*' && b=='*' && c=='*' && a1=='*' && b1=='*' && c1=='*' && a2=='*' && b2=='*' && c2=='*')
	  		{  		
      		  	cout<<"E";
      		  	i = i + 2;
      		}
      		if(a=='*' && b=='*' && c=='*' && a1=='.' && b1=='*' && c1=='.' && a2=='*' && b2=='*' && c2=='*')
	  		{  		
      		  	cout<<"I";
      		  	i = i + 2;
      		}
      		if(a=='*' && b=='*' && c=='*' && a1=='*' && b1=='.' && c1=='*' && a2=='*' && b2=='*' && c2=='*')
	  		{  		
      		  	cout<<"O";
      		  	i = i + 2;
      		}
      		if(a=='*' && b=='.' && c=='*' && a1=='*' && b1=='.' && c1=='*' && a2=='*' && b2=='*' && c2=='*')
	  		{  		
      		  	cout<<"U";
      		  	i = i + 2;
      		}
			
			
		}
	}
	
}
