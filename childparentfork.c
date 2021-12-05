#include<stdio.h>
#include<sys/types.h>

int main(){
	pid_t pid;
	pid=fork();
	if(pid<0){
		printf("\n Not able to create child process");
	}
	else
	if(pid==0){
		printf("\nChild process ");
	}
	else{
		wait(NULL);
		printf("Parent process");
	}
	return 0;


}
