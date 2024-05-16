#include<stdio.h>
float force(float weight);
int main()
{
    float weight;
    printf("Enter your weigh in kg : ");
    scanf("%f",&weight);
    printf("The force exerted by earth on you due to your weight is : %.2f",force(weight));
    return 0;/* here we have used .2 or something inbetween % and f to get desidered no of digits after
                decimal */
}
float force(float weight)
{
    float result;
    result = weight*(9.8);
    return result;
}