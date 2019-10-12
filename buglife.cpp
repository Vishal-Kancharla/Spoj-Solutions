#include<bits/stdc++.h>

using namespace std;
 
int  isBipartite(vector<vector<long >> &adj,vector<int>&visited,int j){
	vector<int >colorArr(adj.size(),-1);
	queue<long >myqueue;
	myqueue.push(j);
	colorArr[j] = 0;
	visited[j] = 1;
	while(!myqueue.empty()){
		long  v = myqueue.front();
		myqueue.pop();
		for(long  i  =0 ; i < adj[v].size() ;++i){
			long  u = adj[v][i];
			if(colorArr[v] == colorArr[u])
				return 0;
			else if(colorArr[u] == -1){
				colorArr[u] = 1 - colorArr[v];
				visited[u] = 1;
				myqueue.push(u);
			}
		}
	}
	return 1;
}

int bfs(vector<vector<long>>&adj){
	vector<int>visited(adj.size(),0);
	for(long i = 0; i < adj.size();++i){
		if(!visited[i]){
			if(!isBipartite(adj,visited,i))
				return 0;
		}
	}
	return 1;
}

int  main(){
	long  t,k;
	cin>>t;
	k = t;
	while(t--){
		long  v,x,y;
		long e;
		cin>>v>>e;
		vector<vector<long >>adj(v);
		for(long  i =0 ; i < e ;++i){
			cin>>x>>y;
			adj[x-1].push_back(y-1);
			adj[y-1].push_back(x-1);
		}
		cout<<"Scenario #"<<k-t<<":"<<endl;
		if(bfs(adj)){
			cout<<"No suspicious bugs found!"<<endl;
		}
		else{
			cout<<"Suspicious bugs found!"<<endl;
		}

	}
}