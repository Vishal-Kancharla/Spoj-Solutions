#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,x,y;
		cin>>n>>x>>y;
		for(long i = 1 ; i < n ;++i){
			if(i%x == 0 && i%y != 0)
				;
		}
		cout<<endl;
	}
}