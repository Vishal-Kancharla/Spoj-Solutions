#include<bits/stdc++.h>
#define pi pair<int,int>
#define mp make_pair
#define f first
#define pb push_back
using namespace std;

int dijkstra(vector<vector<int>>&adj,vector<vector<int>> &cost,int s,int t ){
	vector<int>distance(adj.size(),INT_MAX);
	priority_queue<pi,vector<pi>,greater<pi>>pq;
	pq.push(mp(s,0));
	distance[s] = 0;
	while(!pq.empty()){
		int v = pq.top().f;
		pq.pop();
		for(int i = 0; i < adj[v].size() ;++i){
			int u = adj[v][i];
			int w = cost[v][i];
			if(distance[u] >  distance[v] + w){
				distance[u] = distance[v]+w;
				pq.push(mp(u,distance[u]));
			}

		}
	}
	return distance[t] == INT_MAX ? -1 : distance[t];

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,e;
		cin>>n>>e;
		vector<vector<int>>adj(n);
		vector<vector<int>>cost(n);
		for(int i = 0 ; i < e ;++i){
			int x,y,w;
			cin>>x>>y>>w;
			adj[x-1].pb(y-1);
			cost[x-1].pb(w);
		}
		int x,y;
		cin>>x>>y;
		int dist = dijkstra(adj,cost,x-1,y-1);
		if(dist != -1)
			cout<<dist<<endl;
		else
			cout<<"NO"<<endl;
	}
}