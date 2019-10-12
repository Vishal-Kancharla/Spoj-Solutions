#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int t;
  int a;
  long long b;
  int mod;
  int num;
  cin>>t;
  while(t--){
  	cin>>a;
  	cin>>b;
    mod = b%4;
    if(mod == 0)mod = 4;
    num = pow(a,mod);
    if(b == 0)
    	cout<<1<<endl;
    else
        cout<<num%10<<endl;

  }
}