#include <stdio.h>
#include <string.h>

typedef struct vectorAdd
{
    int x;
    int y;
} va;

va add(va v1, va v2)  //va is the return type of this add function.
{
    va v3;  // a new va type variable v3 is taken to store the result of the vector addition.
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    return v3;
}
int main()
{
    va v1, v2, v3; /* v3 declared here is not the v3 declared in add function.
                      variables declared in different functions are treated as different
                      variable by the compiler although they have the same name. */
    int d, e, f, g;
    printf("Enter the x component of 1st vector: ");
    scanf("%d", &d);

    printf("Enter the y component of 1st vector: ");
    scanf("%d", &e);

    printf("Enter the x component of 2nd vector: ");
    scanf("%d", &f);

    printf("Enter the y component of 2nd vector: ");
    scanf("%d", &g);
    printf("\n");

    v1.x = d;
    v1.y = e;
    v2.x = f;
    v2.y = g;

    v3 = add(v1, v2);  /* here v3 is also a va type variable and the return type of add()
                         is also of va type so that we can equate both variable.*/ 

    printf(" The value of sum of x compontnts is: %d\n ", v3.x);
    printf("The value of sum of y compontnts is: %d\n ", v3.y);
    return 0;
}