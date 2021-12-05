#include<stdio.h>

int main() {

	FILE *fptr1,*fptr2;
	fptr1=fopen("test.txt","w");
	if(fptr1==NULL){
	
		printf("file not exist");
	}
	else {
	
		printf("FIle exist");
		fprintf(fptr1,"You are overwriting the data in to file\n");
	}
	
	return 0;
}
