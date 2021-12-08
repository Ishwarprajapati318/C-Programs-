#include<stdio.h>
#include<malloc.h>

struct Node
{
	int Data;
	struct Node *next;
};

void mylinkedlist(struct Node *tmp)
{
	while(tmp!=NULL)
	{
		printf(" %d->",tmp->Data);
		tmp=tmp->next;
	}

}
int main() {
	struct Node *ptr,*tmp,*head;
	int x;
	head=NULL;
	for(int i=0;i<5;i++){
	ptr=(struct Node *)malloc(1*sizeof(struct Node));
	printf("Enter the value to insert in linked list ");
	scanf("%d",&x);
	ptr->Data=x;
	ptr->next=NULL;
	if(head==NULL)
	{
		head=ptr;
		tmp=ptr;
	}
	else
	{
		tmp->next=ptr;
		tmp=ptr;

	}
	}
	tmp=head;
	mylinkedlist(tmp);
	return 0;


}
