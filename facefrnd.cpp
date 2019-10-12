#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	cin>>n;
	set<int,greater<int>>s;
	for(int i = 0 ; i < n ;++i){
		int x,y;
		cin>>x>>y;
		s.insert(x);
		for(int j = 0 ; j < y ;++j){
			int z;
			cin>>z;
			s.insert(z);
		}
	}
	cout<<s.size()-n<<endl;
}