#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,s,t;
	cin>>n>>s>>t;
	vector<int>a(n);
	for(int i = 0; i < n;++i)
		cin>>a[i];
	sort(a.begin(),a.end(),greater<int>());
	int sum = a[0];
	int screws = s*t;
	int  i;
	for( i = 1 ; i < n ;++i){
		//cout<<sum<<endl;
		if(sum >= screws){
			cout<<i<<endl;
			return 0;
		}
		sum += a[i];
	}
	if(sum >= screws)
		cout<<i<<endl;
	return 0;
}