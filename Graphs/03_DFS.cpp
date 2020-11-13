/* DFS using STL for competitive coding */

#include<bits/stdc++.h>
using namespace std;

vector<bool> v;
vector<vector<int> > g;

void edge(int a,int b){
	g[a].push_back(b);
	
	// for undirected graph
	//g[b].push_back(a);	
}
void dfs(int s){
	v[s]=true;
	cout<<s<<" ";
	
	for(vector<int>::iterator i=g[s].begin();i!=g[s].end();i++){
		if(!v[*i]){
			dfs(*i);
		}
	}
	
	
}

int main(){
	int n , e;
	cin>>n>>e;
	v.assign(n,false);
	g.assign(n,vector<int>());
	
	int a,b;
	for(int i=0;i<e;i++){
		cin>>a>>b;
		edge(a,b);
	}

	dfs(2);
	
	
	return 0;
}
