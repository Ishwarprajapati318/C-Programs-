#include<stdio.h>

int palin(int n){
	int rem;
	static int sum;
	if(n>0){
		rem=n%10;
		sum=sum*10+rem;
		palin(n/10);
	}
	return sum;
}

int main()
{
	int a;
	printf("Enter the number ");
	scanf("%d",&a);
	int ret=palin(a);
	printf("Palin number is %d ",ret);
	return 0;
}
