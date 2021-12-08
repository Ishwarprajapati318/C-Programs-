#include<stdio.h>
#include<string.h>
struct student 
{
	int sno;
	char sname[30];
	float smarks;
};
int main(){
	struct student s;
	s.sno=100;
	strcpy(s.sname,"Ishwar");
	s.smarks=92.2;
	printf("The of s are %d, %s,%2f\n ",s.sno,s.sname,s.smarks);
	return 0;
}

