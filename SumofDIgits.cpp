#include<stdio.h>
#include<iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int t;
	scanf("%d\n",&t);
	while(t--){
    getline(cin,s);
	int sum = 0;
	for(int i = 0 ; i < s.length(); i++){
		//printf("%d%c\n",i,s[i] );
        sum = sum + (s[i]-'0')%10;
     
    }
    printf("%d\n",sum );
	}

}