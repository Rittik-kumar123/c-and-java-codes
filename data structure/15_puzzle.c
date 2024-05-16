#include<stdio.h>
#include<stdlib.h>
int table[4][4];
int checkforfinish()
{
    int i,j,result=0,temp=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(table[i][j]==temp)
            {
                temp++;
            }
        }
    }
    if(temp==16)
    {
        result=1;
    }
    return result;
}
void displayTable()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(table[i][j]==0)
            {
                printf("_\t");
            }
            else
            {
                printf("%d\t",table[i][j]);
            }
        }
        printf("\n");
    }
}
void moveup()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(table[i][j]==0 && j!=0)
            {
                int temp=table[i-1][j];
                table[i-1][j]=0;
                table[i][j]=temp;
            }
        }
    }
}
void movedown()
{
    int i,j;
    for(i=3;i>=0;i--)
    {
        for(j=3;j>=0;j--)
        {
            if(table[i][j]==0 && j!=0)
            {
                int temp=table[i+1][j];
                table[i+1][j]=0;
                table[i][j]=temp;
            }
        }
    }
}
void moveleft()
{
    int i,j;
    for(i=3;i>=0;i--)
    {
        for(j=3;j>=0;j--)
        {
            if(table[i][j]==0 && j!=0)
            {
                int temp=table[i][j+1];
                table[i][j+1]=0;
                table[i][j]=temp;
            }
        }
    }
}
void moveright()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(table[i][j]==0 && j!=0)
            {
                int temp=table[i][j-1];
                table[i][j-1]=0;
                table[i][j]=temp;
            }
        }
    }
}
void movespace()
{
    int s;
    char key=' ';
    while(key!='e')
    {
        printf("Enter Key: \n");
        printf("Enter: u for up,d for down,l for left,r for right: \n");
        scanf("%c",&key);
        switch(key)
        {
            case 'l': moveleft();
                      displayTable();
                      break;
            case 'r': moveright();
                      displayTable();
                      break;
            case 'u': moveup();
                      displayTable();
                      break;
            case 'd': movedown();
                      displayTable();
                      break;  
            case 'c': s=checkforfinish();
                      if(s==1)
                      {
                        printf("game completed.\n");
                      }   
                      else
                      {
                        printf("Game not completed.\n");
                        movespace();
                      } 
                      break;
            case 'e': printf("Program exited.\n");
                      exit(0);
        }
    }
}
void ownsetup()
{
    int i,j;
    printf("Enter the numbers in the table: \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&table[i][j]);
        }
    }
    printf("Table is as follows: \n");
    // for(i=0;i<4;i++)
    // {
        // for(j=0;j<4;j++)
        // {
            // displayTable();
            // movespace();
        // }
    // }
    displayTable();
    movespace();
}
int main()
{
    ownsetup();
}