#include<stdio.h>

int main(){

	FILE *fptr1,*fptr2;
	int i;
	char str[200];
	float f;
	fptr1=fopen("test.txt","r");
	fptr2=fopen("test1.txt","w");
	if(fptr1==NULL||fptr2==NULL){
	
		printf("File not exist\n");
	
	}else{
	
		printf("\n Enter empno");
		scanf("%d",&i);
		printf("\n Enter the name");
                scanf("%s",str);
                printf("\n Enter the salary");
                scanf("%f",&f);
		fprintf(fptr2,"Emp no:=%d\n",i);
		fprintf(fptr2,"Emp name:=%s\n",str);
		fprintf(fptr2,"Emp sal:=%f\n",f);		
                fclose(fptr2);
		fclose(fptr1);
	
	
	
	}
	return 0;


}

