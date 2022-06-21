#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    int x,y;

    printf("Enter the inter values of x : ");
    scanf("%d", &x);
    printf("\nEnter the inter values of y : ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("\nThe point of [%d, %d] is located in the 1st Quadrant", x, y);

    else if (x < 0 && y > 0)
        printf("\nThe point of [%d, %d] is located in the 2nd Quadrant", x, y);

    else if (x < 0 && y < 0)
        printf("\nThe point of [%d, %d] is located in the 3rd Quadrant", x, y);

    else if (x > 0 && y < 0)
        printf("\nThe point of [%d, %d] is located in the 4th Quadrant", x, y);
    else
        printf("The location is at the center");

    printf("\n");

    return 0;
