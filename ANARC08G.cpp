#include<bits/stdc++.h>

using namespace std;

int main(){
	 int n;
	 int t = 0;
	 while(1){
	 	scanf("%d",&n);
	 	if(!n)
	 		break;
	 	t++;
	 	int a[n][n];
	 	long prevsum = 0,cursum = 0;
	 	for(int i = 0 ;i < n ;++i){
	 		for(int j = 0 ; j < n ;++j){
	 			scanf("%d",&a[i][j]);
	 			prevsum += a[i][j];
	 		}
	 	}
	 	
	 	for(int i = 0 ; i < n ;++i){
	 		long out = 0,in = 0;
	 		for(int j = 0; j < n ;++j){
	 			out = out + a[i][j];
	 			in = in + a[j][i];
			}
			if(out-in > 0)
				cursum = cursum + out-in;
	 	}

	 	printf("%d. %ld %ld \n",t,prevsum,cursum );
	 }
}