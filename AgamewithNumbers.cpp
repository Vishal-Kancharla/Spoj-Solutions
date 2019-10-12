#include<stdio.h>

using namespace std;

int main(){
	long long n;
	scanf("%lld",&n);
	if(n%10 == 0){
		printf("%d\n",2);
	}
	else{
		printf("%d\n",1 );
		printf("%lld\n",n%10 );
	}
}