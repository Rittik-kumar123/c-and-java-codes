# include<stdio.h>
# include<stdlib.h>
struct node
{
    char data;
    struct node* next;
    struct node* prev;
};
struct node*head=0,*temp,*tail,*temp1,*temp2;
struct node* createLL(struct node* head)
{
    struct node* newnode;
    int i=1; 
    while(i)
    {
         newnode=(struct node*)malloc(sizeof(struct node));
         printf("Enter data u want to store");
         scanf("%s",&newnode->data);
         newnode->next=0;
         newnode->prev=0;
         if(head==0)
         {
            head=temp=tail=newnode;
         }
         else{
          tail->next=newnode;
          tail=newnode;
          tail->prev=temp->next;
          temp=tail;
         }
         printf("Enter 1 for continue and 0 for exit.");
         scanf("%d",&i);
    }
    return head;
}
int display(struct node*head,int count)
{
    temp=head;
    while(temp!=0)
    {
        count++;
        printf("%c\t",temp->data);
        temp=temp->next;
    }
    printf("Count is %d",count);
    printf("\n");
    return count;
}
void palindrome(int count)
{
    temp1=head;
    temp2=tail;
    int i=1;
    while(i!=((count/2)+1))
    {
        if(temp1->data==temp2->data)
        {
            temp1=temp1->next;
            temp2=temp2->prev;
        }
        else if(temp1->data!=temp2->data)
        {
            printf("Not palindrome\n");
            break;
        }
        printf("Yes Palindrome\n");
        i++;
    }
    

}
int main()
{
    int count=0;
    head=createLL(head);
    count = display(head,count);
    printf("%d",count);
    palindrome(count);
}