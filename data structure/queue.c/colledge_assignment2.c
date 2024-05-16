# include<stdio.h>
# include<stdlib.h>
void display();

struct node
{
    int data;
    struct node*next;
};
struct node* newnode,*head=0,*temp;
void creation()
{
    int i=1;
    while(i)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if (head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Enter 1 for continue and 0 for exit");
        scanf("%d",&i);
    }
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
void insert_at_pos()
{
    int pos,j=1;
    printf("Enter position where u want to insert data:");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    temp=head;
    while(j<pos-1)
    {
        temp=temp->next;
        j++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    display();
    
}
int main()
{
    int i=1,n;
    while(i)
    {
        printf("********MENU**********\n");
        printf("Enter 1 for create\n");
        printf("Enter 2 for insert at pos\n");
        scanf("%d",&n);
        if(n==1)
           creation();
        else if (n==2)
           insert_at_pos();
        printf("\nEnter 1 for continue and 0 for exit: ");
        scanf("%d",&i);
    }
}