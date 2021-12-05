#include<stdio.h>

int main(){

	FILE *fptr1;
	fptr1=fopen("test.txt","w");
	if(fptr1==NULL){
	
		printf("File not exist\n");
	
	}else{
	
		fprintf(fptr1,"I am writing string into the file\n");
		fclose(fptr1);
	
	
	
	}
	return 0;


}

