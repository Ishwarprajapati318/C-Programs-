#include<stdio.h>
#include<malloc.h>

struct node
{
          int data;
          struct node *next; 
};


void mylinkedlist(struct node *temp){
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}

}

void mylinkedr(struct node *temp){
	if(temp==NULL){
		return;
	}
	else{
               // printf("%d->",temp->data);
                //temp=temp->next;
		mylinkedr(temp->next);
		printf("%d->",temp->data);

        }

}


int main()
{
	int x;
	struct node *ptr,*temp,*head;
//	ptr=(struct node *)malloc(1*sizeof(struct node));
	head=NULL;
	for(int i=0;i<10;i++){
		ptr=(struct node *)malloc(1*sizeof(struct node));

		printf("Enter the element in the linked list\n");
		scanf("%d",&x);
		ptr->data=x;
		ptr->next=NULL;
		if(head==NULL){
		head=ptr;
		temp=ptr;
	}
	else{
		temp->next=ptr;
		temp=ptr;
	}
        }
	temp=head;
	
	mylinkedr(temp);
	return 0;
}
