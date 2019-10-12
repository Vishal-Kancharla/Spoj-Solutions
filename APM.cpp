#include<bits/stdc++.h>
#define ULL unsigned long long

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ULL n;
		cin>>n;
		ULL x = (n+1)/2;
		ULL y = (n-1)/2;
		if(x+y==n)
			cout<<y<<" "<<x<<endl;
		else
			cout<<-1<<endl;
	}
}