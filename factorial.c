#include<stdio.h>

int factoral(int n){
	if(n>0){
		return n*factoral(n-1);
	}
	else{
		return 1;
	}

}

int main ()
{
	printf("Enter the number for factorial\n");
	int n;
	scanf("%d",&n);
	int fac=factoral(n);
	printf("Factorial of a given number is %d\n",fac);
}
