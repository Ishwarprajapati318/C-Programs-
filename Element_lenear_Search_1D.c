#include<stdio.h>
int main(){
	int a[]={23,25,63,74,11};
	int x,found=0;
	printf("Element in the array\n");
	for(int i=0;i<5;i++){
		printf(" %d",a[i]);
	}
	printf("\nEnter the element for search\n");
	scanf("%d",&x);
	for(int i=0;i<5;i++){
		if(a[i]==x){
			found=1;
			break;
		}
	}
	if(found==1){
		printf("Element found\n");
	}
	else
	{
		printf("Element not found\n");
	}
	return 0;
}
