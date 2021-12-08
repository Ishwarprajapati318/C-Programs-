#include<stdio.h>

#define fun(a,b) { \
	printf("Sum is %d",a+b); \
}


int main() {
	fun(4,5);
	return 0;
}
