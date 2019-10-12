#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int t;
	int cnt = 1;
	cin>>t;
	while(t){
		t--;
		int n;
		int s;
		cin>>s;
		cin>>n;
		int arr[n];
		int sum = 0;
		int flag = 0;
		for(int i = 0 ; i < n ; i++)
			cin>>arr[i];
		sort(arr,arr+n);
		for(int i = n-1 ; i >= 0 ; --i){
			sum += arr[i];
			if(sum >= s){
				cout<<"Scenario"<<" #"<<cnt<<":"<<endl;
				cout<<n-i<<endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			cout<<"Scenario"<<" #"<<cnt<<":"<<endl;
            cout<<"impossible"<<endl;
         }
         cnt++;
	}
}