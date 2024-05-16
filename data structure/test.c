 #include <stdio.h>
 #include <stdlib.h>
 struct node
 {
    int data;
    struct node *next;
 };
 struct node* head;
 void push(int data)
 {
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
    if(head=0)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    
 }
 void display()
 {
    struct node* temp;
    temp=head;
    if(temp=0)
    {
        printf("Underflow");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
    
 }
 int main()
 {
    head=0;
    push(2);
    push(3);
    push(5);
    display();
    
 }