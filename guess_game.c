#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    int totalTries = 5;
    int guess;
    int ans;
    time_t t;

    //Initialize random number
    srand((unsigned) time(&t));

    //Get Random Number
    ans = rand() % 21;

    printf("This is a guessing game, I have chosen a number between 1 and 20\n");
    printf("You have a maximum number of 5 tries\n");

    for(totalTries = 5;totalTries > 0;totalTries--)
        {
            printf("\nYou have %d number of tr(y)ies left\n", totalTries);
            printf("Please enter number : ");
            scanf("%d", &guess);

           if(guess == ans)
           {
               printf("\nSpot on, I chose the number %d, you guessed the number correctly!\n", ans);
               return 0;
           }
           else if(guess < 0 || guess > 20)
                printf("\nI said the number is between 0 and 20\n");
           else if (guess < ans)
                printf("The number I chose is greater than that\n");
           else if (guess > ans)
                printf("The number I chose is less than that\n");
           }

           printf("\nGame over, you have no tries left, the correct number was %d\n", ans);


            return 0;
}
