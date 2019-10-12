#include<bits/stdc++.h>

using namespace std;

bool bfs_util(vector<vector<long>>&adj,vector<int>&visited,vector<int>&already_guarded,long v,long strength){
	visited[v] = 1;
	if(already_guarded[v])
		return false;
	else
		already_guarded[v] = 1;
	queue<long>myq;
	vector<long>distance(adj.size(),0);
	myq.push(v);
	bool check = true;
	while(!myq.empty() && check){
		long u = myq.front();
		myq.pop();
		for(long i = 0 ; i < adj[u].size();++i){
			long w = adj[u][i];
			if(!visited[w] && check && distance[u] <= strength-1){
				visited[w] = 1;
				distance[w] = distance[u]+1;
				myq.push(w);
				//if(distance[w] <= strength){
				if(!already_guarded[w])
					already_guarded[w] = 1;
				else
					return false;
				//}
			}
			else if(distance[u] > strength-1)
				check = false;
		}
	}
	return true;
}



bool bfs(vector<vector<long>>&adj,vector<pair<long,long>>&soldiers){
	vector<int>visited(adj.size(),0);
	vector<int>already_guarded(adj.size(),0);
	for(long i = 0 ; i < soldiers.size() ;++i){
		long v = soldiers[i].first;
		long strength = soldiers[i].second;
		//if(!visited[v]){
			if(!bfs_util(adj,visited,already_guarded,v,strength))
				return false;
		//}
	}
	for(long i = 0 ; i < adj.size();++i){
		if(!already_guarded[i])
			return false;
	}
	return true;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		long n,e,m;
		cin>>n>>e>>m;
		vector<vector<long>>adj(n);
		for(long i = 0 ; i < e ;++i){
			long x,y;
			cin>>x>>y;
			adj[x-1].push_back(y-1);
			adj[y-1].push_back(x-1);
		}
		vector<pair<long,long>>soldiers;
		for(long i = 0 ; i < m ;++i){
			long x,y;
			cin>>x>>y;
			soldiers.push_back(make_pair(x-1,y));
		}
		if(bfs(adj,soldiers)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}