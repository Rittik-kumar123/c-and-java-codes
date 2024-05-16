# include<stdio.h> 
# include<stdlib.h>

int main()
{

struct node
{
    int data;
    struct node* next;
    
};
struct node* head,*newnode,*temp;//head pointer store  a variable whose data type is struc node.
head=0; // inntialy there is no data that's why  the adress under head pointer is 0
int choice=1;
int count;
while (choice)
{
    newnode = (struct node *)malloc(sizeof(struct node));// maloc going to store a startin address of a variable that 
                                                         //we are going to store in a pointer here we write (struct node*) just 
                                                         //to give a data type of variable that we are going to store in new node
    printf("enter the data");
    scanf("%d",&newnode -> data);
    newnode -> next =0;// as we can't live the pointer block alone so we put 0 over there that means
                       //it was the first block that we are going to use.
    if(head==0)
    {
        head = temp = newnode;
    }
    else
    {
        temp ->next= newnode;
        temp=newnode;

    }
    printf("enter the choise(0,1)");
    scanf("%d",&choice);
}
temp=head; //initial condition of printing.
while (temp!=0)
{
    printf("%d",temp->data);
    temp=temp->next;
    count++;

}
printf("\n%d\n", count);

}

