#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int num, count;

    printf("Enter number of asterisk to be printed : ");
    scanf("%d", &num);

    count = 1;
    while (count <= num)
    {
        printf("* ");
        count = count + 1;
    }
    return (0);

}
