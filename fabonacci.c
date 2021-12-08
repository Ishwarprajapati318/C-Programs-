#include<stdio.h>

int fabonacci(int n)
{
	if(n<=1){
		return n;
	}
	else {
		return (fabonacci(n-1)+fabonacci(n-2));
	}
}

int main()
{
	int a;
	printf("Enter the number for fabonacci ");
	scanf("%d",&a);
	//int ret=fabonacci(n);
	//printf("FAbonacci series is  %d",ret);
	for(int i=0;i<a;i++){
		printf("%d ",fabonacci(i));	
	}
	
	return 0;
}
