#include<bits/stdc++.h>
using namespace std;

int main(){
	long m,n;
	while(1){
		cin>>m>>n;
		if(m == 0 || n == 0)return 0;
		cout<<(m*n/__gcd(m,n))/__gcd(m,n)<<endl;
	}
	return 0;
}