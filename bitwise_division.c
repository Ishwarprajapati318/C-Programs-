#include<stdio.h>
int rem=0,x,y;
int division(int a,int b){
	int quot=1;
	if(a==b){
		rem=0;
		return 1;
	}else if(b>a){
		rem=a;
		return 0;
	}
	while(b<=a){
		b<<=1;
		quot<<=1;
	}
	if(b>a){
		b>>=1;
		quot>>=1;
	}
	quot=quot+division(a-b,y);
	return quot;
	
}


int main(){
	printf("Enter the value of dividend and diviser \n");
	scanf("%d %d",&x,&y);
	int ret=division(x,y);
	printf("Division of %d and %d is %d\n ",x,y,ret);
	printf("Dividend %d, deviser %d and reminder=%d \n",x,y,rem);
}
