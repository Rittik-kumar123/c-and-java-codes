#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you, char comp)
{
    //returns 1 if you win, -1 if you loose and 0 if draw.
    //condition for draw
    if(you==comp)
    {return 0;}

    if(you=='s' && comp=='g')
    {return -1;}
    else if(you=='g' && comp=='s')
    {return 1;}
    if(you=='s' && comp=='w')
    {return 1;}
    else if(you=='w' && comp=='s')
    {return -1;}
    if(you=='w' && comp=='g')
    {return 1;}
    else if(you=='g' && comp=='w')
    {return -1;}
}
int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand()%100 + 1;
    
    if(number<34)
    {comp = 's';}
    else if(number>33 && number<67)
    {comp = 'w';}
    else
    {comp = 'g';}
    printf("Enter 's' for snake, 'w' for water and 'g' for gun : ");
    scanf("%c",&you);
    int result = snakeWaterGun(you,comp);
    printf("You choose %c and computer choose %c.\n ", you , comp);
    if(result==0)
    {printf("Game draw\n");}
    else if(result==1)
    {printf("You Win\n");}
    else
    {printf("You Loose\n");}
    return 0;
}