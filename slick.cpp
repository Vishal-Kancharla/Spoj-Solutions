#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(!n) break;
		vector<vector<int>>matrix(n);
		for(int i = 0 ; i < n ; ++i){
			for(int j = 0 ; j < m ;++j)
				cin>>matrix[i][j];
		}
		vector<int>visited(max(n,m),0);
		map<int,int>m;
		for(int i = 0 ; i < max(n,m) ;++i){
			if(!visited[i]){
				int val = bfs(matrix,visited,i);
				m.insert(val,m[val]+1);
			}
		}	
	}
}