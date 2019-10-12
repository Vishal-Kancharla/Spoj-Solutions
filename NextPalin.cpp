#include<iostream>
#include<string.h>
using namespace std;

int is9(string s,int n){
    for(int i = 0; i  < n;i++)
	if(s[i] != '9')
		return 0;
	return 1;
}


int main(){
	long long n;
    int t;
    string s;
    while(t>0){
	string s;
	cin>>s;
    n = s.length();
    if(is9(s,n)){
       cout<<"1";
       for(int i = 1; i < n; i++)
       	cout<<"0";
       cout<<"1"; 
    }
    else{

    }

	

	

    }

}