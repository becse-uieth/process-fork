#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){

	int i,j,k,l;
	j=getpid();
	printf("befor fork pid: %d\n\n",j);

	i=fork();
	printf("after fork pid: %d\n",i);
	if(i==-1){
		printf("error\n");
		exit("EXIT_SUCCESS");
	}
	else if(i==0){
		k=getpid();
		printf("child pid: %d\n",k);
		printf("this is child\n");
		sleep(3);
	}
	else{
		l=getpid();
		printf("parent pid: %d\n",l);
		printf("this is parent\n");
		exit("EXIT_SUCCESS");
	}
	printf("before fork pid: %d  after fork pid: %d child pid:%d parent pid:%d\n\n\n",j,i,k,l);

	return 0;
}
