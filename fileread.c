#include<stdio.h>

int main(){

	FILE *fptr1,*fptr2;
	char ch[200];
	int i=0;
	fptr1=fopen("test1.txt","r");
        fptr2=fopen("test2.txt","w")
	if("fptr1==NULL" || fptr2==NULL){
	
		printf("File not exist\n");
	}
	else{
	
		printf("File exist\n");
		fscanf1("");
	}
	return 0;
}
