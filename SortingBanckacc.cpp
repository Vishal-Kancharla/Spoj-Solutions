#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		cin.ignore();
		map<string,int>m;
		vector<string>ans;
		while(n--){
			string s;
			getline(cin,s);
			m[s]++;
			if(m[s] == 1)
				ans.push_back(s);
		}

		sort(ans.begin(),ans.end());
		for(int i = 0 ;i < m.size() ;++i){
			cout<<ans[i]<<" " <<m[ans[i]]<<endl;
		}
	}	
}