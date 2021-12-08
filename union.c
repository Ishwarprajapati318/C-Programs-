#include<stdio.h>
#include<string.h>
union st
{
	int a;
	float b;
	double c;
};

int main() {
	union st s;
	printf("Size of union is %d",sizeof(s));
	s.a=10;
	s.b=20.52;
	s.c=653.23;
	printf("\nValue od a,b,c is %d, %f, %lf ",s.a,s.b,s.c);
	return 0;
}
