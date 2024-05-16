#include<stdio.h>
#include<string.h>
int match(char text[],char pattern[])
{
    int text_length=strlen(text);
    int pattern_length=strlen(pattern);
    if(pattern_length>text_length)
    {
        return -1;
    }
    int c,d,e;
    int position;
    for(c=0;c<=(text_length-pattern_length);c++)
    {
        position=e=c;
        for(d=0;d<pattern_length;d++)
        {
            if(pattern[d]==text[e])
            {
                e++;
            }
            else
            {
                break;
            }
        }
        if(d==pattern_length)
        {
            return position;
        }
    }
    return -1;
}
int main()
{
    char text[20];
    printf("Enter the text: ");
    scanf("%s",&text);
    char pattern[20];
    printf("Enter the pattern U want to find: ");
    scanf("%s",&pattern);
    int position=match(text,pattern);
    if(position!=-1)
    {
        printf("string found in location: %d\n",position+1);
    }
    else
    {
        printf("String not Found.\n");
    }

}