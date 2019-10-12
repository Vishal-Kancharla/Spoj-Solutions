#include<iostream>
#include<algorithm>
using namespace std;


int F(int ele,int a[],int n,int c){
	int lastpos = a[0];
	int cowsplaced = 1;
	for(int i = 1 ; i < n ; i ++){
		if(a[i] - lastpos >= ele){
			cowsplaced++;
			if(cowsplaced == c)
				return 1;
			lastpos = a[i];
		}
	}
	return 0;
}

int main(){ 

	int t;
	int n,c;
	cin>>t;
	while(t){
		t--;
		cin>>n;
		cin>>c;
		int arr[n];
		for(int i = 0 ; i < n; i++)
			cin>>arr[i];
		sort(arr,arr+n);
        
        int low  = 0;
        int high = arr[n-1] - arr[0] + 1;
        int mid;

		while(high >= low){
          mid = low + (high-low)/2;
		  if(F(mid,arr,n,c))
		   low = mid + 1;
		  else
		  	high = mid -1 ;
           
		}

		cout<<low-1<<endl;


	}
}