# include<stdio.h>
# include<stdlib.h>

void creation()
{
    struct node
    {
        int data;
        struct node*next;
    };
    struct node* head,*newnode,*temp;
    head=0;
    int choice=1;

    while (choice)
    {
        newnode =(struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d", &newnode->data);

        if (head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }


        printf("enter the choice(0,1)");
        scanf("%d",&choice);
        
    }
    
}


void display()
{
    struct node
    {
        int data;
        struct node*next;
    };
    struct node* head,*newnode,*temp;
    temp=head;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp = temp->next;

    }
    
    
}

void reverse()
{
       struct node
    {
        int data;
        struct node*next;
    };
    struct node *head,*prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    while (nextnode!=0) 
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    
}

int main()
{
    creation();
    display();
    reverse();
    display();
    return 0;
}