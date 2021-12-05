#include<stdio.h>
int main(){
	int a[3][4]={
		{4,5,6,2},
		{12,4,8,0},
		{32,9,12,34}
	};
	int b[3][4]={
                {4,5,6,2},
                {12,4,8,0},
                {32,9,12,34}
        };
	int c[3][4];
	printf("Element in the 2D array\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	printf("Sum of array is \n");
        for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                        printf(" %d",c[i][j]=a[i][j]+b[i][j]);
                }
                printf("\n");
        }

	return 0;
}

