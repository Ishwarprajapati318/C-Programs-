#include<stdio.h>

int main(int argc, char *argv[]){

	printf("Number of argument is: %d\n",argc);
	int i=atoi(argv[1]);
	int j=atoi(argv[2]);
	printf("sum is %d\n",i+j);

	return 0;
}

