#include<bits/stdc++.h>

using namespace std;

bool are_all_9s(string s){
	for(long i = 0 ; i < s.size() ;++i){
		if(s[i] != '9')
			return false;
	}
	return true;
}

void next_palindrome(string s){
	if(are_all_9s(s)){
		cout<<"1";
		for(long i = 1 ; i < s.size() ;++i)
			cout<<"0";
		cout<<"1"<<endl;;
		return;
	}
	long n = s.size();
	long mid = n/2;
	long l = mid-1;
	long r = (n%2) ? mid+1:mid;
	bool leftsmaller = false;
	while(s[l] == s[r] && l >= 0 ){
		l--;r++;
	}
	if(l < 0 || s[l] < s[r])
		leftsmaller = true;

	while(l >= 0){
		s[r] = s[l];
		l--;r++;
	}
	if(leftsmaller){
		int carry = 1;
		l = mid-1;
		long num;
		if(n%2){
			num = (s[mid]-'0') + carry;
			//s[mid] += carry- '0';
			carry = num/10;
			s[mid] = num%10 + '0';
			r = mid+1;
		}
		else
			r = mid;

		while(l >= 0){
			num = (s[l]-'0')+carry;
			//s[l] += carry-'0';
			carry = num/10;
			s[l] = num%10 + '0';
			s[r] = s[l];
			l--;r++;
		}
	}

	cout<<s<<endl;


}

int main(){
	long t;
	cin>>t;
	cin.ignore();
	while(t--){
		//cin.ignore();
		string s;
		getline(cin,s);
		next_palindrome(s);
	}
}