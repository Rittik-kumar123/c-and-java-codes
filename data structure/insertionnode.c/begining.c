# include<stdio.h>

int main()
{
    struct node
    {
        int data;
        struct node* next;
    }; 
    struct node * head, *newnode, *temp;
    head = 0;
   
    int choice=1;
    int count;

    while(choice)
    {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newnode->data);
     
    newnode->next=0;
      
    if (head == 0)
    {
        head = newnode = temp;  
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
    printf("enter the choice(0,1):");
    scanf("%d",&choice);
    }
    temp = head;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp= temp->next;
        count++;
    }

    printf("\ncouunt is\n");
    printf("%d",count);
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("enter the data that u want to insert:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    temp = head;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp= temp->next;
        
    }

    getch();
    

}
