#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	while(1){
		cin>>n;
		if(n == 0)break;
		vector<long long>c(n);
		vector<long long>p(n);
		for(long i = 0 ; i < n ; ++i)
			cin>>c[i];
		for(long i = 0 ; i < n ; ++i)
			cin>>p[i];

		sort(c.begin(),c.end(),greater<int>());
		sort(p.begin(),p.end());
		long long cost = 0;
		for(long i = 0 ; i < n ; ++i)	
			cost += c[i]*p[i];
		cout<<cost<<endl;
		}	
}