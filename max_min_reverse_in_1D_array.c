#include<stdio.h>
int main(){
	int a[]={45,25,36,96,87,12,65};
	int min=a[0],max=a[0];
	int len=sizeof(a)/sizeof(int);
	for(int i=0;i<len;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
                        min=a[i];
                }

	}
       /*for(int j=0;j<len;j++){
                if(a[j]<min){
                        min=a[j];
                }
        }
*/
	printf("Max and min element in the array is %d %d\n",max,min);
	printf("Array element in reverse order\n");
	for(int i=len;i>=0;i--){
		printf(" %d",a[i]);
	}
	
	
	return 0;

}
