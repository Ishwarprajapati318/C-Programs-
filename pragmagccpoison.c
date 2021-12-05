/*
supported by gcc compiler and used to remove an indentifier completely from the  program 
*/
#include<stdio.h>
#pragma GCC poison printf

int main() {
	int i=10;
	if(a==10){
		printf("okay");
	}
	else
		printf("yup");
	return 0;
}
