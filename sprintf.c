#include<stdio.h>
int main(){

	char str1[]="Ishwar",str2[]="Prajapati";
 	int empno=4;
	float sal=80000;
	char str3[300];
	sprintf(str3,"My name is %s and my surname is %s and my empno is %d and my current salary is %f",str1,str2,empno,sal);
	printf("\nMy string is: %s\n",str3);
	return 0;
}
