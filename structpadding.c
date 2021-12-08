#include<stdio.h>
#include<string.h>
#include<malloc.h>

struct student 
{
	int sno;
	char sname[30];
	float f;
};
int main(){
	struct student *s;
	s=(struct student *)malloc(1*sizeof(struct student));
	s->sno=20;
	s->f=96.32;
	printf("VAlue of sno and f is %d, %f",s->sno,s->f);
	free(s);
	return 0;
}
