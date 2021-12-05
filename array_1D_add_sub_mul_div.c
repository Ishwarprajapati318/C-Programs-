#include<stdio.h>
int main(){
	int a[]={12,52,36,1,25,4};
	int b[]={2,5,6,7,8,9};
	int len=sizeof(a)/sizeof(int);
	printf("Element in array a and b are\n");
	for(int i=0;i<len;i++){
		printf("%d %d\n",a[i],b[i]);
	
	}
	printf("Array addition,subtraction,multipication, and division is:\n");
	for(int i=0;i<len;i++){
		int add=a[i]+b[i];
		int sub=a[i]-b[i];
		int mul=a[i]*b[i];
		int div=a[i]/b[i];
		printf(" %d %d %d %d\n",add,sub,mul,div);
	
	}


}
