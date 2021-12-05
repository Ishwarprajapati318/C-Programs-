#include<stdio.h>
#include<string.h>
int main(){

	int a[]={4,3,2,5,65,34,2,76};
	int len=8;
	printf("Element of array are: \n");
	for(int i=0;i<len;i++){
		printf(" %d",a[i]);
	
	}
	//sorting in asce
	/*printf("\nElement od array in ascending order:\n");
	for(int i=0;i<len;i++){
		for(int j=0;j<len-i-1;j++){
		
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}

	}*/
	for(int i=0;i<len;i++){
                for(int j=0;j<len-i-1;j++){

                        if(a[j+1]>a[j]){
                                int temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }

        }

	printf("Element of sorted array are: \n");
        for(int i=0;i<len;i++){
                printf(" %d",a[i]);

        }

}

