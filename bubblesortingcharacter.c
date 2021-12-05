#include<stdio.h>
#include<string.h>
int main(){

	char a[]={'e','r','d','f','a','l','c','b'};
	int len=8;
	printf("Element of array are: \n");
	for(int i=0;i<len;i++){
	
		printf(" %c",a[i]);
	
	}
	for(int i=0;i<len;i++){
                for(int j=0;j<len-i-1;j++){

                        if(a[j]>a[j+1]){
                                int temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }

        }

	printf("\nElement of sorted array are: \n");
        for(int i=0;i<len;i++){
                printf(" %c",a[i]);

        }
	return 0;

}

