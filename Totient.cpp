#include<stdio.h>

using namespace std;

int totient (int n){
    int result = n;
	for(int p = 2 ; p*p <= n ; p++){
		if(n%p == 0){
			while(n % p == 0)
				n = n/p;
     		result -= result/p;
		}

	}
	if (n > 1)
		result -= result/n;
	return result;
	
}



int main(){
	int t;
	scanf("%d",&t);
    int n;
	int result;
	while(t){
		scanf("%d",&n);
		result = totient(n);
		printf("%d\n",result );
		t--;

	}
}