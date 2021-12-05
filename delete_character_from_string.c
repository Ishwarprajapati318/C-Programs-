#include<stdio.h>
#include<string.h>

int main() {
	char a[5]={'a','b','g','c','d'};
	char x;
	int loc,found=-1;
	printf("Enter the element in the array\n");
	for(int i=0;i<5;i++){
		printf(" %c",a[i]);
	}
	printf("\nEnter the charcter index for delete\n");
	scanf("%c",&x);
	for(int i=0;i<5;i++){
		if(a[i]==x){
			loc=i;
			found=1;
		}
	}
	for(int i=loc;i<5;i++){
		a[i]=a[i+1];	
	}
	if(found==1){
		printf("Element after deletion in array\n");
		for(int i=0;i<5;i++){
			printf("%c",a[i]);
		}
	}
	else
	{
		printf("Element not found");
	}
	return 0;

}
