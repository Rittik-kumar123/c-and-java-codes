#include <stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* front=0;
struct node* rear=0;
void enqueue(int x)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next=0;
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void display()
{
    struct node* temp;
    if(front==0 && rear==0)
    {
        printf("underflow condition");
    }
    else 
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}

void dequeue()
{
    struct node* temp;
    if(front==0 && rear==0)
    {
        printf("underflow condition");
    }
    else
    {
        temp=front;
        printf("\nnumber that is going to be deleted is %d\n",temp->data);
        front=temp->next;
        free(temp);
    }
    
}

int main()
{
    enqueue(5);
    enqueue(8);
    enqueue(3);
    display();
    dequeue();
    display();

    return 0;
}