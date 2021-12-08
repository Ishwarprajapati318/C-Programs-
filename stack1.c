#include<stdio.h>
int a[5];
int x;
int top=-1;
void push(){
	if(top>=4){
		printf("Stack is overflow\n");
	}
	else
	{
		printf("Enter the value into stack ");
		scanf("%d",&x);
		top=top+1;
		a[top]=x;
	}
}
int pop()
{
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
	printf("Values in the stack is \n");
	for(int i=top;i>=0;i--){
		printf("%d\n",a[i]);
	}
}
int main()
{
	printf("Welcome to the stack program \n");
	int choice,t;
	do{
	printf("Please enter your choice 1.PUSH, 2.POP, 3.Display, and 4.Exit\n");
        scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			push();
			break;
		case 2:
			t=pop();
			printf("Deleted %d\n",t);
			break;
		case 3:
			display();
			break;
		case 4:
			break;
	}
	}
	while(choice!=4);
	return 0;
}
