#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

typedef struct{
	int start;
	int end;
}activity;

bool compare(activity act1,activity act2){

	return (act1.end == act2.end)? (act1.start < act2.start):(act1.end < act2.end);
} 

int main(){
	int t;
	cin>>t;
	while(t){
		int n;
		scanf("%d",&n);
		activity act[n];

		for(int i= 0 ; i < n ; i++)
			scanf("%d %d",&act[i].start,&act[i].end);
	    sort(act,act+n,compare);
	    //for(int i= 0 ; i < n ; i++)
			//cout<<act[i].start<<act[i].end
        int count = 0;
        int last = -1;

	    for(int i = 0 ; i < n ; i++){
	    	if(act[i].start >= last){
	    		count++;
	    		last = act[i].end;
	    	}
	    }
       printf("%d\n",count);
       t--; 

	}

}