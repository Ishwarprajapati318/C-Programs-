#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*ptr,*prev,*tmp;
    int x;
    head=NULL;
    for(int i=0;i<5;i++)
    {
        ptr=(struct node *)malloc(1*sizeof(struct node));
        printf("\n enter data into linked list");
        scanf("%d",&x);
        ptr->data=x;
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            prev=ptr;
        }
        else
        {
            prev->next=ptr;
            prev=ptr;
        }
    }
    tmp=head;
    while(tmp!=NULL)
    {
        printf("%d -> ",tmp->data);
        tmp=tmp->next;
    }
    return 0;
}
