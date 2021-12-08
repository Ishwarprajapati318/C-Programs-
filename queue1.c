#include<stdio.h>
int a[5];
int x;
int front=-1,rear=-1;

void enqueue() {
	if(rear>=4){
		printf("Queue overflow\n");
	}
	else
	{
		if(front==-1){
			front=0;
		}
		printf("Enter the value in queue\n");
		scanf("%d",&x);
		rear=rear+1;
		a[rear]=x;
	}
}

int dequeue() {
	if(front<0 || front>rear){
		printf("Queue is underflow\n");
	}
	else{
		x=a[front];
		front=front+1;	
	}
	return x;
}
void display(){
	printf("Element in the queue\n");
	if(front<0){
		printf("Queue  is empty\n");
	}
	for(int i=front;i<=rear;i++){
		printf("%d\n",a[i]);
	}
}
int main(){
	int t,choice;
	printf("Welcome to the Queue\n");
	do{
		printf("Enter your choice:- \n 1.Enqueue\n2. Dequeue\n 3. Display\n 4. Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				enqueue();
				break;
			case 2:
				t=dequeue();
				printf("Element deleted from queue %d\n",t);
				break;
			case 3:
				display();
				break;
			case 4:
				break;
		}
	}while(choice!=4);
	return 0;
}
