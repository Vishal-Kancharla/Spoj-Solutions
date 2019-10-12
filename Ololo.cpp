#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long n;
	cin>>n;
	vector<long long>v(n);
	for(long i = 0 ; i < n ; ++i)
		cin>>v[i];
	sort(v.begin(),v.end());
	for(long i = 0 ; i < n ;++i){
		if(v[i] != v[i+1] && v[i] != v[i-1] || i == n-1){
			cout<<v[i]<<endl;
			break;
		}
	}
}