#include <stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node*newnode,*temp,*head;
void createLL(){
    int i=1,data;
    head=0;
    while(i){
        printf("Enter data:\n");
        scanf("%d",&data);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("1 for continue and 0 for exit: ");
        scanf("%d",&i);
    }
    
}
int display(int count){
    temp=head;
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
    return count;
}
void update(int count)
{
    int i=1;
    temp=head;
    if((count%2)!=0)
    {
        while(i<(count)/2)
        {
            temp=temp->next;
            i++;
        }
        head=temp->next;
    }
    printf("%d\n",head->data);
}

int main()
{
    int count=0;
    createLL();
    count=display(count);
    // printf("%d\n",count);
    update(count);
    
    return 0;
}