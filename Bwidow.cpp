#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<long,long> p1,pair<long ,long> p2){
	return p1.first < p2.first;	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<long,long>>rings(n);
		vector<pair<long,long>>pairs(n);
		for(int i = 0 ; i < n ; ++i){
			long r,R;
			cin>>r>>R;
			rings[i] = make_pair(r,R);
			pairs[i] = rings[i];
		}
		sort(rings.begin(),rings.end(),cmp);
		long largest_r = rings[n-1].first;
		//cout<<largest_R<<endl;
		bool check  = false;
		for(int i = 0 ; i < n-1 ; ++i){
			if(rings[i].second >= largest_r){
				check = true;
				continue;
			}
		}
		if(!check){
			for(int i = 0; i < n ; ++i ){
				if(pairs[i].first == largest_r){
					printf("%d\n",i+1 );
					break;
				}
			}
			
		}
		else
			printf("%s\n", "-1");
	}
}