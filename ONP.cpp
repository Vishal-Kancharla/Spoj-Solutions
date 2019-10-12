#include<iostream>
#include<stack>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n>0){
	stack<char>s;
	char exp[400];
	cin>>exp;
	int len  = strlen(exp);
    for(int i = 0 ; i  <len ; i++){
    	if(isalpha(exp[i]))
    		cout<<exp[i];
    	else if (exp[i] == '(')
    		s.push(exp[i]);
    	else if(exp[i] == ')'){
    		while(!s.empty() && s.top() != '('){
                     cout<<s.top();
                     s.pop();   
                     } 

            if(s.top() == '(')
            	s.pop();
                 }
        else{ s.push(exp[i]);

        }    


   }
   while(!s.empty()){
   	cout<<s.top();
    s.pop();
     }
     cout<<endl;
     n--;
}
return 0;
}