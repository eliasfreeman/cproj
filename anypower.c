#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int num, power, result;

    printf("Enter number : ");
    scanf("%d", &num);

    printf("Enter power : ");
    scanf("%d", &power);

    result = pow(num, power);

    printf("%d ^ %d = %d\n", num, power, result);

    return 0;
}
