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
int pairsum(struct node* h1,struct node* h2,int x)
{
    int count=0;
    struct node*p1,*p2;
    for(p1=h1;p1!=0;p1=p1->next)
    {
        for(p2=h2;p2!=0;p2=p2->next)
        {
            if(p1->data+p2->data==x)
            {
                count++;
                printf("(%d,%d)\t",p1->data,p2->data);
            }
            
        }
    }
    printf("\n");
    return count;
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
    
    int x;
    scanf("%d",&x);
    int mh=pairsum(head1,head2,x);
    printf("%d\n",mh);

}