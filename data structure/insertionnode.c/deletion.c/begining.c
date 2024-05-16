# include<stdio.h>
# include<stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node*next;
    };
    struct node * head,* newnode, * temp;
    head = 0;
    int choice =1;
    while (choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
         printf("Enter the data:");
         scanf("%d",&newnode->data);
         newnode->next=0;

         if(head==0)
         {
             head=newnode=temp;
         }
         else
         {
             temp->next=newnode;
             temp=newnode;
         }
    printf("enter the choice(0,1)");
    scanf("%d",&choice);
    }
    temp=head;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    if (head==0)
    {
        printf("node are empty");
    }
    else
    {
      temp=head;  
      head=head->next;
      free(temp);
    }
     temp=head;
     printf("\nAfter deletion the data are as follows:");
    while (temp!=0)
    {
        
        printf("\n%d",temp->data);
        temp=temp->next;
    }
    
    
    
}