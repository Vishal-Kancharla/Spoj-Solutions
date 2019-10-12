#include<bits/stdc++.h>
#define ULL unsigned long long
using namespace std;

int main(){
	long t;
	cin>>t;
	while(t--){
		ULL n,k,m;
		cin>>n>>k>>m;
		if(m <= n){
			cout <<0<<endl;
			continue;
		}
		ULL l = (log(m/n))/log(k);
		cout<<l<<endl;
	}
}