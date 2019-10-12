#include<bits/stdc++.h>
#define mp make_pair
#define pi pair<long,long>
#define s second
#define f first
#define for(i,l,r) for(long i = l ; i < r ;++i)

using namespace std;

long dijkstra(vector<vector<long>> &adj,vector<vector<long>> &cost,long s,long d){
	vector<long long>distance(adj.size(),INT_MAX);
	priority_queue<pi,vector<pi>,greater<pi>>pq;
	pq.push(mp(s,0));
	distance[s] = 0;
	while(!pq.empty()){
		long v = pq.top().f;
		pq.pop();
		for(i,0,adj[v].size()){
			long u = adj[v][i];
			long w = cost[v][i];
			if(distance[u] > distance[v] + w){
				distance[u] =  distance[v]+w;
				pq.push(mp(u,distance[u]));
			}
		}
	}
	return distance[d] == INT_MAX ? -1 : distance[d];

}

int main(){
	long t;
	cin>>t;
	while(t--){
		long n,e,s,d;
		cin>>n>>e;
		cin>>s>>d;
		vector<vector<long>> adj(n);
		vector<vector<long>>cost(n);
		for(i,0,e){
			long x,y,w;
			cin>>x>>y>>w;
			adj[x-1].push_back(y-1);
			adj[y-1].push_back(x-1);
			cost[x-1].push_back(w);
			cost[y-1].push_back(w);
		}
		long dist = dijkstra(adj,cost,s-1,d-1) ;
		if(dist == -1)
			cout<<"NONE"<<endl;
		else
			cout<<dist<<endl;
	}
	return 0;
}