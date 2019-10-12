#include<iostream>
using namespace std;

int main(){
  int t; 
  long long n;
  long long sum;
  long long temp;
  cin>>t;
  while(t>0){
  	sum = 0;
  	cin>>n;
  	for(int i = 0; i < n; i++){
  		cin>>temp;
  		sum = (sum+temp)%n;
  	}
  	if(sum)
  		cout<<"NO"<<endl;
  	else
  		cout<<"YES"<<endl;
    t--;
  } 

}