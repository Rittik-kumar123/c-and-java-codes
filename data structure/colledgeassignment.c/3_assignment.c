#include <stdio.h>
#include <malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *create_ll(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("Enter -1 to end\n");
	printf("Enter the data :");
	scanf("%d",&num);
	while(num!=-1)
	{
		 new_node = (struct node*)malloc(sizeof(struct node));
		 new_node->data=num;
		 if(start==NULL)
			 {
			 new_node->next=NULL;
			 start=new_node;
		 }
		 else
			{
			 ptr=start;
			
			 while(ptr->next!=NULL)
			 	ptr=ptr->next;
			 ptr->next = new_node;
			 new_node->next=NULL;
		 }
		 printf("Enter the data :");
		 scanf("%d",&num);
	}
	return start;
}
struct node *middle(struct node *list)
{
	struct node *slow,*fast;
	slow=fast=list;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	
	return slow;
}
void display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL\n");
}
void main()
{
	struct node *list=NULL;
	printf("Enter the element of List:\n");
	list=create_ll(list);
	display(list);
	struct node *mid;
	mid=middle(list);
	display(mid);
}
