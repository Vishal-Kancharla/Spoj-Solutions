#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	while(1){
		cin>>t;
		cin.ignore();
		if(!t)
			break;
		string s,str = "";
		int k = 0;
		bool alternate = false;
		getline(cin,s);
		int  l = 0,r;
		for(int i = 0 ; i < t; ++i){
			r = i;
			alternate = false;
			for(int j = 0 ; j < s.size()/t ;++j){
				str = str+s[r];
				if(alternate){
					r = r + 2*i+1;
					alternate = false;
				}
				else{
					r = r + 2*(t-i)-1;
					alternate = true;
				}
			}
	
		}
		cout<<str<<endl;
	}
}

