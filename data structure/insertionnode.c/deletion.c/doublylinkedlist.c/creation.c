# include<stdio.h>
# include<stdlib.h>

struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node * head,* newnode,*tail;
int count;

void create ()
{
    head=0;
    int choice;
    while (choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if (head==0)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        printf("Enter the choice(0,1):");
        scanf("%d",&choice);
        
    }
    
}
void display()
{
    
    tail=head;
    while (tail!=0)
    {
      printf("%d\n",tail->data);
      tail=tail->next;
      count++;  
    }
    printf("%d\n",count);
}

void insertatbeg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;

        newnode->next=head;
        head->prev=newnode;
        head=newnode;

}

void insertatend()
{
      newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;

        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;

}


int main()
{
    create();
    display();
    insertatbeg();
    display();
}