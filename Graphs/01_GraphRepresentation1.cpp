/* Graphs Adjacency Matirx Resprentation */

#include<bits/stdc++.h>
using namespace std;

int adj[5000][5000]={0};

//un directed graph
void addEdge(int u, int v) 
{ 
  adj[u][v]=1;
  adj[v][u]=1;
    
} 

void printGraph(int V) 
{ 
    for (int v = 0; v < V; ++v) 
    { 
          for(int i=0;i<V;i++){
          	cout<<adj[v][i]<<" ";
		  }
		  
        cout<<endl; 
    } 
} 

int main(){
	int v =5;
	
	addEdge(0, 1); 
    addEdge(0, 4); 
    addEdge(1, 2); 
    addEdge(1, 3); 
    addEdge(1, 4); 
    addEdge(2, 3); 
    addEdge(3, 4); 
	
	printGraph(v);
	
	return 0;
	
}


