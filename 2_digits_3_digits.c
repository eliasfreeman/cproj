#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    int main(void)
{
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    if (num / 100 == 0 && num /10 != 0)
        printf("\nThis is a 2 digits number\n");

    else if (num / 100 != 0 && num / 1000 == 0)
        printf("This is a 3 digits number\n");

    else
        printf("This is not a 2 digits or 3 digits number\n");

    return 0;


}

