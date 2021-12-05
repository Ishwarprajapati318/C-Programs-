#include<stdio.h>
int main(int argc, char *argv[]){

	printf("Number of argument is %d\n",argc);
	for(int i=0;i<argc;i++){
	                                      
		printf("%s\n",argv[i]);
	}
	return 0;
}
