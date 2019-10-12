#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int dis[n][n];
		for(int i = 0  ; i < n ;++i){
			for(int j  = 0;  j < n ;++j)
				cin>>dis[i][j];
		}

		for(int i = 0 ; i< n ;++i){
			for(int j = i+1 ; j < n; ++j){
				bool check = true;
				for(int k = 0; k < n ;++k){
					if(k == i|| k == j)continue;
					if(dis[i][k] + dis[k][j] == dis[i][j]){
						check = false;
						break;
					}
				}
				if(check == true)
					printf("%d %d\n",i+1,j+1 );
			}
		}
		if(t > 0)printf("\n");
	}
	return 0;
}