#include<stdio.h>

int a[5];
int rear=-1,front=-1;

void enqueue(){
	int x;
	if(rear>5){
		printf("The queue is overflow\n");
	
	}
	else{
		if(front==-1){
			front=0;
		}
		printf("Element insert into queue\n");
		scanf("%d",&x);
		rear=rear+1;
		a[rear]=x;
	}

}

int dequeue(){
	int x;
	if(front<0 || front>rear){
		printf("Queue is underflow\n");
	}
	else
	{
		x=a[front];
		front+1;
	}
	return x;

}

void display(){
	if(front<0){
		printf("Queue is emptiy\n");
	}
	else
	{
		for(int i=front;i<=rear;i++){
			printf("\n%d",a[i]);
		}
	}
}

int main() {
	int x;
	printf("Welcome to the queue please enter your choice 1.Enqueue 2. Dequeue, 3. Display, and 4. Exit /n");
	int choice;
	scanf("%d",&choice);
	do {
		switch(choice){
			case 1:
				enqueue();
				break;
			case 2:
				x=dequeue();
				printf("the element deleted %d\n",x);
			case 3:
				display();
				break;
			case 4:
				break;
		}
	} while(choice!=4);
	return 0;

}


