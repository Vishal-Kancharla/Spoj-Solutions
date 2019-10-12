#include<stdio.h>

using namespace std;

long long reverseit(long long n){
	long long revnum = 0;
     int rem;
	while(n != 0){
		rem = n%10;
		revnum = revnum*10 + rem;
		n = n/10;
	}
	return revnum;
}

int main(){
	long long t;
	scanf("%lld",&t);

	while(t){
		long long n1,n2;
        long long revnum,revnum2;
		scanf("%lld %lld",&n1,&n2);
		revnum = reverseit(n1);
		revnum2 = reverseit(n2);
		printf("%lld\n",reverseit(revnum+revnum2 ));
		t--;
	}
} 