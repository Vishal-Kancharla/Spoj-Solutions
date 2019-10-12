#include<stdio.h>
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
	string base;
	string exp;
    getline(cin,base);
    getline(cin,exp);
    int simple_base = 0;
    int simple_exp = 0;
    for(int i =0 ; i < base.length(); i++){
    	simple_base = (simple_base*10 + base[i] - '0')%9;

    }
      for(int i =0 ; i < exp.length(); i++){
    	simple_exp = (simple_exp*10 + exp[i] - '0')%6;

    }
    
 
    int simple_num = pow(simple_base,simple_exp);

    if(simple_num % 9 == 0)
     printf("%d\n",9 );
    else
     printf("%d\n",simple_num%9); 
}