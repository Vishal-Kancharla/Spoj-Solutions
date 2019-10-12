#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	int t;
	int n;
	long long ans;
	scanf("%d",&t);
	n = t;
	while(t){
		long long num;
		scanf("%lld",&num);
		ans = int(sqrt(n+1)-1);
		printf("%s%d%s%lld\n","Case ",(n-t+1),": ",ans );
		t--;

	}
}