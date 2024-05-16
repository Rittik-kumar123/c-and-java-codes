# include<stdio.h>
# include<stdlib.h>

struct node
{
    int constant;
    int variable;
    struct node* next;
};
struct node *newnode,*temp1,*head1=0,*head2=0,*temp2,*temp;
struct node* create();
void display(struct node*head1,struct node*head2);
int main()
{
    int degree;
    printf("Enter the degree of polynomial:");
    scanf("%d",&degree);
    while(degree+1)
    {
        printf("\n!st ploynomial\n");
        head1=create(head1);
        printf("\n2nd polynomial\n");
        head2=create(head2);
        degree--;
    }
    printf("\n!st ploynomial\n");
    display(head1,head2);
}
struct node* create(struct node* head)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter constant:");
    scanf("%d",&newnode->constant);
    printf("Enter variable:");
    scanf("%d",&newnode->variable);
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    return head;
}
void display(struct  node* head1,struct node*head2)
{
    temp1=head1;
    temp2=head2;
    printf("\nthe polynomial is\n");
    while(temp1!=0)
    {
        
        if(temp1->variable==0)
        {
            printf("%d+%d",temp1->constant,temp2->constant);
        }
        else
        {
            printf("(%d+%d)X%d + \t",temp1->constant,temp2->constant,temp1->variable);
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
}