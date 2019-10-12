#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,q;
	//cin>>n>>q;
	scanf("%ld %ld",&n,&q);
	set<long>s;
	while(q--){
		long y,k;
		scanf("%ld %ld",&y,&k);
		if(y == 1)
			s.insert(s.begin()+k,-1);
		else{
			printf("%ld\n",s.lower_bound(y));
		}

	}
}