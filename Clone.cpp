#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(1){
		cin>>n>>m;
		cin.ignore();
		if(n==0 && m==0)break;
		map<string,int>m;
		set<string>st;
		string s[n];
		set<string>::iterator itr;
		for(int i = 0 ; i < n ;++i){
			getline(cin,s[i]);
			st.insert(s[i]);
			m[s[i]]++;
		}
		int a[n+1];
		for(int i = 0; i <= n ;++i)a[i] = 0;
		for(itr = st.begin() ; itr != st.end() ; ++itr){
			//cout<<s[i]<<" ";
			a[m[*itr]]++;
		}
		//cout<<m.size()<<endl;
		for(int i = 1 ; i <= n ;++i)
			cout<<a[i]<<endl;
	}
}