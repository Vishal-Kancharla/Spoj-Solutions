#include<bits/stdc++.h>

using namespace std;


string club_color(char c1,char c2){
	string s;
	if(c1 == 'R' && c2 == 'G' || c1 == 'G' && c2 == 'R'){
		s = "B";
	}
	else if(c1 == 'B' && c2 == 'G' || c1 == 'G' && c2 == 'B'){
		s = "R";
	}
	else {
		s = "G";
	}
	return s;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin,s);
		while(s.size() != 1){
			bool check = false;
			string str = "";
			string temp = "";
			int k= 0;
			for(int i = 0 ; i < s.size()-1 ; ++i){
				if(s[i] != s[i+1]){
					check = true;
					temp = club_color(s[i],s[i+1]);
					str = temp+str; 
				}
				else{
					str = s[i] + str;
				}
				s[i+1] = str[k++];
			}
			if(!check)
				break ;
			s = str;
		}
		cout<<s.size()<<endl;
	}
}




#include <bits/stdc++.h>

using namespace std;

long long get_pisano_period(long long m) {
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}

long long get_fibonacci_huge(long long n, long long m) {
    long long remainder = n % get_pisano_period(m);
    cout<< get_pisano_period(m)<<endl;
    long long first = 0;
    long long second = 1;

    long long res = remainder;

    for (int i = 1; i < remainder; i++) {
        res = (first + second) % m;
        first = second;
        second = res;
    }

    return res % m;
}

int main() {
//    for (int i = 2; i < 100; i++) {
//        std::cout << i << " : " << get_pisano_period(i) << std::endl;
//    }
//    return 0;
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge(n, m) << '\n';
}

