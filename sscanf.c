#include<stdio.h>
int main(){

	char str1[]="04 December 2021";
	int myday, myyear;
	char mymonth[10];
	sscanf(str1,"%s %d %d",mymonth,&myday,&myyear);
	printf("The data is\n");
	printf("\nMy string is: %s\n",mymonth);
	printf("\nMy string is: %d\n",myday);
	printf("\nMy string is: %d\n",myyear);
	return 0;
}

