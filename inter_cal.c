#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    int main(void)
{

    int a, b;
    char operand;
    int result;


    printf("Enter your mathematical operation of two given integers :\n");
    scanf("%d %c %d", &a, &operand, &b);


    switch(operand)
    {
    case '+':
        printf(" = %d\n", a+b);
        break;
    case '-':
        printf(" = %d\n", a-b);
        break;
    case '*':
        printf(" = %d\n", a*b);
        break;
    case '/':
        if (b == 0)
            printf("You can not divide by 0!!\n");
        else
            printf(" = %d\n", a/b);
        break;
    case '%':
        if (b == 0)
            printf("You can not divide by 0!!\n");
        else
            printf(" = %d\n", a%b);
        break;
    default:
        printf("Error!!!\n");
    }
}
