#include<iostream>

using namespace std;

int main(){
	int g,b;
	int rem,ma,mi;
	while(1){
		cin>>g>>b;
		if(g == -1)
			break;
		if(g == b){
			if(g == 0)
				cout<<0<<endl;
			else
				cout<<1<<endl;
		}
		else{
			ma = max(g,b);
			mi = min(g,b);

			rem = ma%(mi+1);

			if(rem)
				cout<<(ma/(mi+1))+1<<endl;
			else
				cout<<(ma/(mi+1))<<endl;
		}

	}
	return 0;
}