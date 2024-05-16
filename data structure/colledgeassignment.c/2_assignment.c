# include<stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head1=0,*head2=0,*newnode,*temp;


struct node* createLL(struct node *head1)
{
    int i=1;
    while(i)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head1==0)
        {
            head1=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Enter 1 for continue and 0 for exit");
        scanf("%d",&i);
    }
    return head1;
}
struct node* mergehead(struct node* h1,struct node* h2)
{
    if(!h1)
    {
        return h2;
    }
    else if(!h2)
    {
        return h1;
    }
    else if(h1->data<h2->data)
    {
        h1->next=mergehead(h1->next,h2);
    }
    else{
        h2->next=mergehead(h1,h2->next);
    }
}
void display(struct node *head1)
{
    temp=head1;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    //head1=0;
    // head2=0;
    printf("1 Linked list\n");
    head1=createLL(head1);
    display(head1);
    printf("2 LInked list\n");
    head2=createLL(head2);
    display(head2);
    printf("After merging ll\n");
    struct node* mh=mergehead(head1,head2);
    display(mh);

}