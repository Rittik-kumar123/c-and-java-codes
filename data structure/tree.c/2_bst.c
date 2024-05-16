# include<stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* insert(struct node*root,int data)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=0;
    if(root==0)
    {
        
        return newnode;
    }
    else
    {
        if(data>root->data)
        {
            root->right=insert(root->right,data);
        }
        else
        {
            root->left=insert(root->left,data);
        }
        return root;
    }
}
void display(struct node* root)
{
    
    if(root!=0)
    {
        display(root->left);
        printf("%d\t",root->data);
        display(root->right);

    }
}
void  preorder(struct node* root)
{
    
    if(root!=0)
    {
        printf("%d\t",root->data);
        display(root->left);
        display(root->right);

    }
}
struct node* searchBST(struct node*root,int val)
{
    if(root==0)
    {
        return 0;
    }
    if(root->data==val)
    {
        return root;
    }
    else if(root->data>val)
    {
        searchBST(root->left,val);
    }
    else
    {
        searchBST(root->right,val);
    }
}
int main()
{
    struct node*root;
    root=0;
   int i=1;
   while(i)
   {
       int data;
       printf("Enter data: ");
       scanf("%d",&data);
       root=insert(root,data);
       printf("Enter 1 for continue and 0 for exit");
       scanf("%d",&i);
   }
    display(root);
    int key;
    printf("Enter Value u want to search: ");
    scanf("%d",&key);
    if(searchBST(root,key)==0)
    {
       printf("Element does'nt exist.\n");
    }
    else{
        printf("Exit");
    }
    preorder(root);

}
