#include<bits/stdc++.h>
#define mod_ 1000000007
using namespace std;

void dfs(vector<vector<int>>&adj,vector<int>&visited,vector<int>&ways,int s){
	visited[s] = 1;
	for(int i = 0 ; i < adj[s].size() ;++i){
		int u = adj[s][i];
		if(visited[u] == 0){
			//cout<<"u : "<<u<<endl;
			dfs(adj,visited,ways,u);
		}
		//cout<<"u : "<<u<<endl;
		ways[s] = ways[s] + ways[u];
		ways[s] = ways[s]%mod_;
	}
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int c,b,s,t;
		cin>>c>>b>>s>>t;
		vector<vector<int>>adj(c);
		vector<int>visited(c,0);
		vector<int>ways(c,0);
		while(b--){
			int x,y;
			cin>>x>>y;
			adj[x-1].push_back(y-1);
		}
		ways[t-1] = 1;
		dfs(adj,visited,ways,s-1);
		cout<<ways[s-1]<<endl;
	}
}
