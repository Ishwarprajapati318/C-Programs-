#include<stdio.h>

int reverse(int n){
	static int sum;
	int rem;
	if(n>0){
		rem=n%10;
		sum=sum*10+rem;
		reverse(n/10);
	}
	else
	{
		return sum;
	}

}
int main()
{
	int x;
	printf("Enter the number for reverse ");
	scanf("%d",&x);
	int ret=reverse(x);
	printf("Reverse number is %d ",ret);
	return 0;
}
