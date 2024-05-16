#include <stdio.h>
#include <string.h>

typedef struct complex
{
    int x;
    int y;
} cn;

void display(cn c)
{
    printf("The complex number you entered is (%d + %di)\n", c.x, c.y);
}

int main()
{
    cn c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part for the %d complex number", i + 1);
        scanf("%d", &c[i].x);

        printf("Enter the imaginary part for the %d complex number", i + 1);
        scanf("%d", &c[i].y);
    }
    for (int i = 0; i < 5; i++)
    {
        display(c[i]); // function call
    }
    return 0;
}