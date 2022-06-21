#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    int numMonth;

    printf("Enter the number value of the month : ");
    scanf("%d", &numMonth);
    printf("\n");

    switch(numMonth)
    {
        case 1:
            printf("The value of %d is January", numMonth);
            break;
        case 2:
            printf("The value of %d is February", numMonth);
            break;
        case 3:
            printf("The value of %d is March", numMonth);
            break;
        case 4:
            printf("The value of %d is April", numMonth);
            break;
        case 5:
            printf("The value of %d is May", numMonth);
            break;
        case 6:
            printf("The value of %d is June", numMonth);
            break;
        case 7:
            printf("The value of %d is July", numMonth);
            break;
        case 8:
            printf("The value of %d is August", numMonth);
            break;
        case 9:
            printf("The value of %d is September", numMonth);
            break;
        case 10:
            printf("The value of %d is October", numMonth);
            break;
        case 11:
            printf("The value of %d is November", numMonth);
            break;
        case 12:
            printf("The value of %d is December", numMonth);
            break;
        default:
            printf("Not a month Value");
            break;

    }

    printf("\n");
    return (0);

}
