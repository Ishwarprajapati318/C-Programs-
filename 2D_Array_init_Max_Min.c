#include<stdio.h>
int main(){
	int a[3][4]={
		{4,5,6,2},
		{12,4,8,0},
		{32,9,12,34}
	};
	printf("Element in the 2D array\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	int max=a[0][0],min=a[0][0];
	 for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                        if(a[i][j]>max){
				max=a[i][j];
			}
			if(a[i][j]<min){
                                min=a[i][j];
                        }

                }
        }
	printf("\nMax and min value in the given array is %d, %d \n",max,min); 

	return 0;
}
