#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* front =0;
struct node* rear =0;

void enqueue(int x)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next =0;
    newnode->data=x;
    if(rear==0)
    {
        rear=front=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}
void display()
{
    struct node* temp;
    temp=front;
    if(front==0 && rear ==0)
    {
        printf("queue is empty");
    }
    else
    {
        while(temp->next!=front)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }printf("%d\t",temp->data);
    }
}
void deque()
{
    struct node* temp;
    temp =front;
    if(front==0 && rear ==0)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        front=rear=0;
        free(temp);
    }
    else
    {
        front=front->next;
        rear->next = front;
        free(temp);
    }
}

int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(10);
    display();
    deque();
    printf("\n");
    display();
    

    return 0;
}