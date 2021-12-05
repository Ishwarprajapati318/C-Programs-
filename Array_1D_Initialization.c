#include<stdio.h>

int main(){
	int a[]={2,3,4,5,2,4};
	int len=sizeof(a)/sizeof(int);
	int b[len];
	printf("Enter the element in the array\n");
	for(int i=0;i<len;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<len;i++){
		printf("Element in the array a and b is for index %d %d %d\n",i,a[i],b[i]);
	
	}
	return 0;


}
