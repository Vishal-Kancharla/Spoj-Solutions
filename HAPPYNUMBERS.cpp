#include<iostream>
#include<map>

using namespace std;

int main(){
  int n; 
  int count = 0;
  int flag = 1;
  map<int,int>ar;
  cin>>n;
  while(ar[n] != 1){
  	ar[n] = 1;
  	int sum = 0;
  	int last = 0;
  	while(n){
  		last = n%10;
  		sum += last*last;
  		n = n/10;
  	}
     count++;
  	if(sum == 1)
  		{
  			cout<<count<<endl;
  			flag = 0;
  		}
  	else{
  		n = sum;
  	}
  }
  if(flag == 1)
  	cout<<"-1"<<endl;

}