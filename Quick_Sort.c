#include<stdio.h>
void myquicksort(int *a, int left, int right){
	int pivot,i,j,temp;
	if(left<right){
		pivot=left;
		i=left;
		j=right;
		while(i<j){
			
			while(a[i]<=a[pivot]){
				i++;
			}
			while(a[j]>a[pivot]){
				j--;
			}
			if(i<j){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[j];
		a[j]=a[pivot];
		a[pivot]=temp;
		myquicksort(a,left,j-1);
		myquicksort(a,j+1,right);
	}

}

int main(int argc,char *argv[]){
	int a[]={21,4,23,6,3};
	int found=0,x;
	myquicksort(a,0,4);
	printf("Sorted array is \n");
	for(int i=0;i<5;i++){
		printf(" %d",a[i]);
	}
	return 0;
}
