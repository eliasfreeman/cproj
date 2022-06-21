#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int units, tens, hundredth;
    int sum;

    printf("Enter three digits number : ");
    scanf("%d", &num);

    units = (num % 10);
    tens = (num / 10) % 10;
    hundredth = (num / 100);

    sum = hundredth + tens + units;
    printf("\nThe sum of %d, %d, %d is %d\n", hundredth, tens, units, sum);

    return 0;
}
