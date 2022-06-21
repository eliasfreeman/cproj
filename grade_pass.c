#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float scores;

    printf("Kindly enter scores : ");
    scanf("%f", &scores);

    if (scores >= 60)
    {
        printf("\nCongratulations, you passed your examinations!\n");
    }
    else if (scores < 60 && scores >= 40)
    {
        printf("\nFair, Put in more effort!\n");
    }
    else
    {
        printf("\nFailed, Try again\n");
    }
    return (0);
}
