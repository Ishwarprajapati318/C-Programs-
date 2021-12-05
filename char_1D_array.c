#include<stdio.h>
int main(){
	char a[15];
	printf("Enter the char into the array\n");
	for(int i=0;i<10;i++){
		scanf("%s",&a[i]);
	}
	printf("\n%s",a);
	for(int i=0;i<5;i++){
		printf(" %c",a[i]);
	}
	return 0;

}
