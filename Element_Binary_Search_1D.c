#include<stdio.h>

void mybubblesort(int *a){
	int temp;
	printf("Element in sorted order\n");
	for(int i=0;i<6;i++){
		for(int j=0;j<6-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<6;i++){
		printf(" %d\n",a[i]);
	}

}

int mybinarysort(int *a, int left, int right,int x){
	int index=0;
	if(left<=right){
		index=(left+right)/2;
		if(a[index]==x){
			return index;
		}
		if(x<a[index]){
			return mybinarysort(a,left,index-1,x);
		}
		else{
			return mybinarysort(a,index+1,right,x);	
		}
	}

	return -1;
}
int main(){
	int a[]={12,43,54,23,13,32};
	int x,found=0;
	mybubblesort(a);
	printf("\nPlease enter the element for search\n");
	scanf("%d",&x);
	mybinarysort(a,0,5,x);
	int ret=mybinarysort(a,0,5,x);
	if(ret==-1){
		printf("Element not found\n");
	}
	else
	{
		printf("Element found at %d index\n",ret);
	}
	return 0;
}
