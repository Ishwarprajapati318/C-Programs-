#include<stdio.h>
//#include<conio.h>

int main() {
	FILE *fptr1,*fptr2;
	fptr1=fopen("test.txt","a");
	if(fptr1==NULL){
		printf("File not exist\n");
	}
	else{
		printf("File exist\n");
		fprintf(fptr1,"I am appending the data in to the text file\n");
		fclose(fptr1);
	
	}
         return 0;

}

