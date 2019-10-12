#include<iostream>
#include<stdlib.h>
#include<stack>
#include<queue>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t != 0){
    stack<int> s;
    queue<int> q;
    int a;
    int need = 1;
   for(int i = 0 ; i < t ; i++)
   	{
   		cin>>a;
        q.push(a);
      }
    while(!s.empty() || !q.empty()){

    	if(!q.empty() && q.front() == need){
    		need++;
    		q.pop();
    	}
    	else{
    		if(!s.empty() && s.top() == need){
    			need++;
    			s.pop();
    		}
    	
    	else{
    		if(!q.empty()){
    			int n = q.front();
    			s.push(n);
    			q.pop();

    		}
    	
    	else 
    		break;
    }
   }
  }
  if(need==t+1){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
        cin>>t;
    }
    return 0;
}