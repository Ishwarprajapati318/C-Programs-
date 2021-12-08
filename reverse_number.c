#include<stdio.h>

int reverse(int n){
	
	int rem;
	static int sum;
	if(n>0){
		rem=n%10;
		sum=sum*10+rem;
		reverse(n/10);
	}
	else{
		return sum;
	}

}

int main(){
	int n;
	printf("Enter the number for reverse/n");
	scanf("%d",&n);
	int ret=reverse(n);
	printf("Reverse of the given number is: %d ",ret);
	return 0;
}
