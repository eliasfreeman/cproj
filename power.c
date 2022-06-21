#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int x, x2, x4, x6, x8;

    printf("Enter the integer : ");
    scanf("%d", &x);

    x2 = pow(x,2);
    x4 = pow(x,4);
    x6 = pow(x,6);
    x8 = pow(x,8);

    printf("\n%d to the power of 2 is : %d", x, x2);
    printf("\n%d to the power of 4 is : %d", x, x4);
    printf("\n%d to the power of 4 is : %d", x, x6);
    printf("\n%d to the power of 8 is : %d\n", x, x8);

    return (0);

}
