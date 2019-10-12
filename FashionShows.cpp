#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
	int t;
	int n;
	int sum;
	cin>>t;
	while(t--){
		cin>>n;
		sum = 0;
		int arr1[n];
		int arr2[n];
        for(int i = 0 ; i < n ; i++)
        	cin>>arr1[i];
        for(int i = 0;i < n ;i++)
        	cin>>arr2[i];
		sort(arr1,arr1+n);
		sort(arr2,arr2+n);

        for(int i =0 ; i < n ;i++)
        	sum = sum+arr1[i]*arr2[i]; 
        cout<<sum<<endl;

	}
}