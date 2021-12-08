#include<stdio.h>
#include<math.h>

int main(){
	int a,b;
	printf("Enter number for multipication ");
	scanf("%d %d",&a,&b);
	int res=0;
	while(b>0){
		if(b&1){
			res+=a;
		}
		a<<=1;
		b>>=1;
	}
	printf("Multipication of numbers is %d",res);
}
