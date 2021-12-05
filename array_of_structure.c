#include<stdio.h>

struct clss {

	int roll_no;
	char grade;
	float marks;
};

void resultdisplay(struct clss a[3]) {

	int i;
	int len=3;
	for(i=0;i<len;i++) {
	
		printf("roll number: %d\n",a[i].roll_no);
		printf("Grade is: %c\n ",a[i].grade);
		printf("Marks in exam: %.2f\n",a[i].marks);
	}
	
}

int main() {

	struct clss rra[3]
	        ={{1,'a',23.6f},
		{2,'b',56.1f},
		{5,'e',85.2f}};
	resultdisplay(rra);
	return 0;
}
