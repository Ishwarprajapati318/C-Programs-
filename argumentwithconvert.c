#include<stdio.h>
int main(int argc, char *argv[]){

	int i,j;
        char str[10],str1[10];	
	printf("Number of argument is %d\n",argc);
	i=atoi(argv[1]);
	j=atoi(argv[2]);
	printf("The sum of two argument is %d\n",i+j);
	itoa(i,str,2);
	itoa(j,str1,2);
	printf("THe str to int is %s %s\n",str,str1);

	return 0;

}
