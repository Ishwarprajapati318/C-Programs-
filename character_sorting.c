#include<stdio.h>
#include<string.h>
#include<malloc.h>

void mysorted(char *a){
	int temp;
	for(int i=0;i<20;i++){
		for(int j=0;j<10-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main(){
	char *a;
	a=(char *)malloc(20*sizeof(char));
	 /*for(int i=0;i<10;i++){
                a[i]=(char *)malloc(10*sizeof(char));
        }*/
	printf("Enter the character into the array\n");
	for(int i=0;i<20;i++){
		scanf("%c",&a[i]);
	}
	printf("Characters inside the array is\n");
	for(int i=0;i<20;i++){
		printf(" %c",a[i]);
	}
	mysorted(a);
	printf("Characters inside the array after sorted is\n");
        for(int i=0;i<20;i++){
                printf(" %c",a[i]);
        }
	printf("\n");
	free(a);
	return 0;
}
