#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int n;
	scanf("%lld",&n);
    if((n&(n-1))== 0)
        printf("%s\n","TAK" );
    else
    	printf("%s\n","NIE" );

}