#include<bits/stdc++.h>

using namespace std;

pair<int,int> bfs_util(vector<vector<int>>&adj,int v){
	vector<int>visited(adj.size(),0);
	vector<int>dist(adj.size(),0);
	queue<int>myq;
	myq.push(v);
	visited[v] = 1;
	dist[v] = 0;
	//int count = 0;
	while(!myq.empty()){
		int h = myq.front();
		myq.pop();
		//count++;
		bool check = false;
		for(int i = 0; i < adj[h].size() ;++i){
			int u = adj[h][i];
			if(!visited[u]){
				visited[u] = 1;
				//count = count + 1;
				myq.push(u);
				dist[u] = dist[h]+1;
				//check = true;			
			}
			//count = count - adj[h].size();
		}
		//if(check) 
			//count++;
		if(myq.empty())
			return make_pair(h,dist[h]);
	}
	return make_pair(-1,-1);
}

int main(){
	int n;
	cin>>n;
	vector<vector<int>>adj(n);
	for(int i = 0 ; i < n-1 ;++i){
		int x,y;
		cin>>x>>y;
		adj[x-1].push_back(y-1);
		adj[y-1].push_back(x-1);
	}
	//cout<<bfs_util(adj,1).first<<endl;
	//cout<<bfs_util(adj,1).second<<endl;
	pair<int,int>rand,max_dist;
	rand = bfs_util(adj,0);
	//cout<<rand.first<<rand.second<<endl;
	max_dist = bfs_util(adj,rand.first);
	//cout<<max_dist.first<<max_dist.second<<endl;
	cout<<max_dist.second<<endl;
}