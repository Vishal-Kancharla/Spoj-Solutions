#include<bits/stdc++.h>
#define ULL unsigned long long
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
 	ULL p,q;
 	cin>>p>>q;
 	ULL k = __gcd(p,q);

 	p = p/k;
 	q = q/k;

 	cout<<q<<' '<<p<<endl;
 }
}