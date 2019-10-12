#include<stdio.h>
using namespace std;

int Binary(int arr[],int low ,int high,int ele){
	while(high >= low){
	int mid = low + (high-low)/2;
	if(arr[mid] == ele)
		return mid;
	else if(arr[mid] > ele)
		high = mid - 1; 
	else
		low = mid + 1;
}
  return -1;
}

int main(){
int n;
int q;
int ele;
scanf("%d",&n);
scanf("%d",&q);
int a[n];
for(int i = 0 ; i <  n ;i++)
	scanf("%d",&a[i]);
for(int i =0 ;i < q ; i++){
	scanf("%d",&ele);
	int ans = Binary(a,0,n,ele);
	printf("%d\n",ans);
}


} 