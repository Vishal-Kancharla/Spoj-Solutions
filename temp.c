#include<stdio.h>
#include<unistd.h>

int counter = 0;
int main(){
	int i;
	for (i = 0; i <2; i ++){
		fork();
		//fork();
	//	fork();
		counter++;
		printf("counter = %d\n", counter);
	}
	printf("counter = %d\n", counter);
	return 0;
}