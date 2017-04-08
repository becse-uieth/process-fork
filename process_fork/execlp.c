#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){

	printf("Running ps with system \n");
	execlp("ps", "ps",  "ax", 0);
	printf("Done.\n");
	exit(0);
}
