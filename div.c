
#include<iostream>
using namespace std;

int main()
{ int t,i;
 scanf("%d",&t);
   while(t--){ 
     int n,x,y;
     scanf("%d %d %d",&n,&x,&y);
     for(i=1;i<n;i++){
    if(i%x==0 && i%y!=0)
     printf("%d ",i);
  }
  printf("\n");
}
return 0;}