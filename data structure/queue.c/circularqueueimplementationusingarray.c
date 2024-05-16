# include<stdio.h>
# define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if(front==-1 && rear ==-1)
    {
        front =rear =0;
        queue[front]=x;
    }
    else if((rear+1)%N==front)
    {
        printf("queue is full");
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
    }
}
void dequeue()
{
    printf("\n dequeue element is :");
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else if (front==rear)
    {
        printf("%d",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("%d", queue[front]);
        front=(front+1)%N;
    }
    printf("\n");
}
void display()
{
    printf("queue list is :");
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        int i=front;
        while (i!=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[i]);
        
    }
}
int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(9);
    enqueue(-1);
    display();
    dequeue();
    display();
}