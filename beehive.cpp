#include<bits/stdc++.h>
using namespace std;

int main(){
	long n;
	bool flag;
	while(1){
		cin>>n;
		flag = false;
		if(n == -1)break;
		for(long i = 0; 6*i < n ; ++i){
			if(6*i + 1 == n){
				flag = true;
				break;
			}
		}
		if(flag)
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;

	}
}
