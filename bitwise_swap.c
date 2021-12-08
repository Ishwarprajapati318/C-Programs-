#include<stdio.h>

int main(){
	int a,b;
	printf("Enter two number for swap\n");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a and b after swap %d %d",a,b);
	return 0;
}
