#include<bits/stdc++.h>
using namespace std;


int bfs(vector<vector<int>>&adj,vector<int>&shades,int x,int y){
	queue<int>q;
	set<int>s;
	vector<int>visited(adj.size(),0);
	q.push(x);
	s.insert(shades[x]);
	visited[x] = 1;
	while(!q.empty()){
		int u = q.front();
		//visited[u] = 1;
		cout<<u<<endl;
		q.pop();
		if(u == y) return s.size();
		for(int i = 0 ; i < adj[u].size() ;++i){
				int w = adj[u][i];
				if(visited[w] == 0){
					q.push(w);
					visited[w] = 1;
					s.insert(shades[w]);
				}
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,q;
		scanf("%d %d",&n,&q);
		vector<int>shades(n);
		vector<vector<int>>adj(n);
		for(int i = 0 ; i < n ;++i)
			scanf("%d",&shades[i]);
		for(int i = 0 ; i < n-1 ; ++i){
			int x,y;
			scanf("%d %d",&x,&y);
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i = 0 ; i < q ;++i){
			int x,y;
			scanf("%d %d",&x,&y);
			printf("%d\n",bfs(adj,shades,x,y));
		}
	}
}