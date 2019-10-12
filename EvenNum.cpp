#include<bits/stdc++.h>

using namespace std;

int main(){
	long t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		if(n % 2){
			cout<<n<<endl;
		}
		else{
			long rev = 0;
			while(n > 0){
				rev <<= 1;
				 if (n & 1 == 1) 
          			  rev ^= 1; 
        		n >>= 1; 
			}
			cout<<rev<<endl;
		}
	}
}