#include<stdio.h>

int main(){
	FILE *fptr;
	char c;
	fptr=fopen("test.txt","r");
	if(fptr==NULL){
		printf("File not exist\n");

	}
	else{	
	     printf("file exist\n");
	     do{
		     c=fgets(fptr);
		     printf("%c",c);
	     }
	     while(c!=EOF);
	     fclose(fptr);
	}
        
	return 0;
}

