#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct student
{
	int i;
	float f;
};
int main()
{
	struct student s[5];
	s[5]=(struct student *)malloc(5*sizeof(struct student));
	printf("Please enter the data for 10 student");
	for(int j=0;j<5;j++){
		scanf("%d",&s[j].i);
		scanf("%f",&s[j].f);
	}
	printf("\n Data inside array of structure is\n");
	for(int j=0;j<5;j++){
		printf("\nData for %d structure is %d,%.2f ",j,s[j].i,s[j].f);
	}
	free(s[5]);
	return 0;
}

