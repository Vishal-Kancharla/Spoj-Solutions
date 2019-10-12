#include<bits/stdc++.h>
using namespace std;
#define f(i,l,r) for(long i =l ;i < r ; ++i)
void update(vector<long>&D,long l,long r){
	D[l] += 1;
	D[r+1] -= 1;
	return ;
}


int main(){
	long n,k;
	cin>>n;
	vector<long>diff(n+1,0);
	cin>>k;
	while(k--){
		long l,r;
		cin>>l>>r;
		update(diff,l-1,r-1);
	}
	vector<long>A(n,0);
	long max = 0;
	f(i,0,n){
		if(i == 0){
			A[i] = diff[i];
			max = A[i];
			continue;
		}
		A[i] = A[i-1] + diff[i];
		if(max < A[i])
			max = A[i];
	}
	cout<<max<<endl;
	f(i,0,n){
		if(A[i] == max)
			cout<<i+1<<" ";
	}
	cout<<endl;
}