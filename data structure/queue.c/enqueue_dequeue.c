#include <stdio.h>
# define N 5
int queue[5];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear == N-1)
    { printf("queue is full"); }
    else if(front == -1 && rear == -1)
    { front=rear=0;
      queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}

void dequeue()
{
  if(front == -1 && rear == -1)
  {
      printf("empty list");
  }
 else if(front==rear)
  {
      front=-1;
      rear=-1;
      
  }
  else
  {
      printf("value that going to unlist is %d\n",queue[front]);
      front++;
      
  }
    
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}

int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(3);
    enqueue(-1);
    display();
    dequeue();
    display();

    return 0;
}