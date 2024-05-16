
#include <stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    int next;
};
struct node *temp,*newnode,*head;

void creation()
{
    head=0;
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next = newnode;
            temp=newnode;
        }
        printf("enter your choice press 1 for add and 0 for delete\n");
        scanf("%d",&choice);
    }
}
void display()
{
    temp=head;
    if(head==0)
    {
        printf("linked list is empty");
    }
    else
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
int main()
{
   creation();
   display();

    return 0;
}