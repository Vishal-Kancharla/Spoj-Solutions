#include<bits/stdc++.h>

using namespace std;

int cyclicUtil(vector<vector<int>> &adj,vector<int> &visited,vector<int>&recStack,int x){
	visited[x] = 1;
	recStack[x] = 1;
	for(int i = 0; i < adj[x].size() ;++i){
		if(recStack[adj[x][i]])
			return 1;
		else if (!visited[adj[x][i]] && cyclicUtil(adj,visited,recStack,adj[x][i]))
			return 1;
	}
	recStack[x] = 0;
	return 0;

}



int cyclic (vector<vector<int>> &adj){
	vector<int>recStack(adj.size(),0);
	for(int i = 0 ; i < adj.size() ;++i){
		vector<int>visited(adj.size(),0);
		if(!visited[i]){
			if(cyclicUtil(adj,visited,recStack,i))
				return 1;
		}
	}
	return 0;
}



int main(){
	int n,e;
	cin>>n>>e;
	if(e != n-1){
		cout<<"NO"<<endl;
		return 0;
	}
	else{
		cout<<"YES"<<endl;
		return 0;
	}
	vector<vector<int>>adj(n);
	for(int i = 0; i < e ;++i){
		int x,y;
		cin>>x>>y;
		adj[x-1].push_back(y-1);
		//adj[y-1].push_back(x-1);
	}
	if(cyclic (adj))
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}