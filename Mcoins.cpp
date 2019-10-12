#include<stdio.h>

using namespace std;

int wins[1000002];

int CheckWin(int k, int l,int size,int lastsize){
  wins[0] = 0;
  wins[1] = 1;
  int i;
  for(i = (lastsize>2)?lastsize:2; i<=size;i++ ){
      wins[i] = (wins[i-1]==1)?0:1;
      if((i >= k && wins[i-k] == 0) || (i >= l && wins[i-l] == 0))
      	  wins[i] = 1;

  }
  return wins[size];
}


int main(){
	int l,m,k;
    int maxsize = 0;
	scanf("%d%d%d",&k,&l,&m);
	int lastsize;
    int size;
	while(m--){
		lastsize = maxsize;
		scanf("%d",&size);
		if(size > maxsize){
			maxsize = size;
			printf("%s",CheckWin(k,l,size,lastsize)?"A":"B");
		}
		else
			printf("%s",wins[size]?"A":"B" );

	}
	return 0;
}