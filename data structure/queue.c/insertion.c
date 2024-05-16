# include<stdio.h>
# include<stdlib.h>
void insert_at_beg();
void insert_at_mid();
// void insert_at_end();
void display();
struct node
{
    int data;
    struct node *next;
};

int main()
 {
    int n,i=1;
    while(i)
    {
        printf("Main Menu\n");
        printf("Enter 1 for insertion at begining\n");
        printf("Enter 2 for insertion at mid\n");
        printf("Enter 3 for insertion at end\n");
        printf("Enter 4 for display\n");
        
        printf("Enter the number:\n");
        scanf("%d",&n);
        if(n==1)
          insert_at_beg();
        if(n==2)
          insert_at_mid();
        // if(n==3)
        //   insert_at_end();
        if(n==4)
          display();
     
        printf("\nEnter 1 for continue and 0 for exit\n");
        scanf("%d",&i);
          
    }
 }

struct node* head,* newnode,* temp;

void insert_at_beg()
 {
    int count=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data u want to insert\n");
    scanf("%d",&newnode->data);
    
    newnode->next=head;
    head=newnode;
    count=count+1;
    printf("%d\n",count);
    
    display();
 }
void insert_at_mid()
{
    int j=1,pos;
    temp=head;
    printf("Enter the position where u want to insert the newnode\n");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data u want to insert\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    while(j!=pos)
    {
        temp=temp->next;
        j=j+1;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    display();
    
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}





















































