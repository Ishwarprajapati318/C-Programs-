#include<stdio.h>
#include<string.h>
void myrevstring(char *a)
{
	int i,j;
	int len=strlen(a);
	char b[10];
	printf("Reverse process start\n");
	for(int i=0;i<6;i++){
		printf(" %c\n",a[i]);
	
	}
	for(int i=5;i>=0;i--){
		j=5;
		b[j-i]=a[i];
	}
	printf("String in reverse order is\n");
	for(int i=0;i<6;i++){
		printf(" %c",b[i]);
	}
	printf("\n");
}
int main(){
	char a[]={"Ishwar"};
	printf("Given string is %s\n",a);
	myrevstring(a);
	return 0;
}
