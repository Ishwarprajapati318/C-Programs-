#include<stdio.h>
int main(){
	int a[]={23,43,54,2,3,4};
	int b[6];
	printf("Element in the array\n");
	for(int i=0;i<6;i++){
		printf(" %d",a[i]);
	}

	for(int i=5;i>=0;i--)
	{
		int j=5;
		b[j-i]=a[i];
	}
	printf("\nElement of another array after insertion in reverse order\n");
	for(int i=0;i<6;i++){
		printf(" %d",b[i]);
	}
	return 0;


}
