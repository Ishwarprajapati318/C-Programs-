#include<stdio.h>
int top=-1;
int a[5];
int x;
void push(){
	if(top>4){
		printf("Stack overfflow\n");
	}
	else{
		printf("Enter the value for push \n");
		scanf("%d",&x);	
		top=top+1;
		a[top]=x;
	}
}
int pop(){
	if(top<0){
		printf("Stack is underflow\n");
	}
	else
	{
		x=a[top];
		top=top-1;
	}
	return x;
}
void display()
{
	printf("Element in the stack \n");
	for(int i=top;i>=0;i--){
		printf("%d\n",a[i]);
	}
}
int main()
{
	int choice;
	printf("Enter the element in the stack\n");
	do{
	printf("Enter your choice 1.push 2.pop 3.display and 4.exit");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		push();
		break;
	case 2:
		x=pop();
		printf("Element deleted is %d\n",x);
		break;
	case 3:
		display();
		break;
	case 4:
		break;
	}
	}
	while(choice!=4);
}
