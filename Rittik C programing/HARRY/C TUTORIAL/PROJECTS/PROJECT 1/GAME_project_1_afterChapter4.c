#include <stdio.h>
#include <stdlib.h>/*we included this library to run rand() function which is used to print a random 
                    number*/
#include <time.h>  /* we have included this library to initiate time from 0 after each executation of rand()
                    to gnereate a new random number each time*/

int main()
{
    int number, guess, Nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 and 100//
    //printf("The number is %d\n", number);
    // keep running the loop until the number is gussed
    do   // here we have used the do while loop to run the fuction at least once.
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed the correct number in %d attempts ", Nguesses);
        }
        Nguesses++;
    } while (guess != number);  // if guess == number the program will terminate.

    return 0;
}