#include<stdio.h>

struct student {
	int roll_no;
	char grade;
	float marks[4];
};


void displayresult(struct student a) {

	printf("roll number is%d\n",a.roll_no);
	printf("grade in exam %c\n",a.grade);
	printf("Marks get in exam");
	int i;
	int len=sizeof(a.marks)/sizeof(float);
	for(i=0;i<len;i++) {
	
		printf("subject:%d: %.2f\n",i+1,a.marks[i]);
	}
}

int main() {

	struct student b={1,'b',{53.2,256,12.5}};
	displayresult(b);
	return 0;


}
