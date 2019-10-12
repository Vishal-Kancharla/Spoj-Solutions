#include<stdio.h>
int main(){

  long long int k;
  long long int t;      
  scanf("%lld",&t);
  while(t != 0){
  	scanf("%lld",&k);
  	/* Last digit of the number is 2 
  	this makes the number of form (10*x + 2)
  	whose cube(ends in 888) is 1000*x^3 + 600*x^2 + 120*x + 8 = S
  	S mod 10 is (100,60,12) which should end in 88
  	12*x = --88,where as (S mod 10) mod 10 = 12*x which should end in --8,
  	 The possible cases are x = 4,9,14,19,..
  	 19 is the first valid case 
  	 here 60*x^2 always ends in --60 hence 12*x must end in 28 
  	 possible cases are 19,44,69,94
  	 ie 10(19*x + 25) + 2 */
    long long int ans  = 10*(25*(k-1) + 19) +2 ;
    printf("%lld\n",ans );
    t--;
}
}