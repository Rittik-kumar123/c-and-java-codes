# include<stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create()
{
    int x;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter number :");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter data for the left child of %d\n",x);
    newnode->left=create();// if data that we enter is not -1 then it will go on further or when we enter -1 it will proceed.
    printf("Enter data for the right child of %d\n",x);
    newnode->right=create();
    return newnode;
}
void display(struct node* root)
{
    
    if(root!=0)
    {
        printf("%d\t",root->data);
        display(root->left);
        display(root->right);

    }
}
int main()
{
    struct node*root;
    root=0;
    root=create();
    display(root);
}