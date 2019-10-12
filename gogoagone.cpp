#include<bits/stdc++.h>

using namespace std;

int main(){
	int arr[8],sum = 0;
	for(int i = 0 ; i < 8  ;++i){
		cin>>arr[i];
		sum += arr[i];
	}
	int p;
	cin>>p;
	for(int i = 0 ; i <  p ;++i){
		int x,y;
		cin>>x>>y;
		if(arr[x-1] > arr[y-1])
			sum -= arr[y-1];
		else
			sum -= arr[x-1];
	}
	cout<<sum<<endl;
}