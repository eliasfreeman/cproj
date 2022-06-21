#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int units, tens, hundredth;
    int reverseNum;

    printf("Enter three digits number : ");
    scanf("%d", &num);

    units = (num % 10);
    tens = (num / 10) % 10;
    hundredth = (num / 100);

    reverseNum = units;
    reverseNum = (reverseNum * 10) + tens;
    reverseNum = (reverseNum * 10) + hundredth;

    printf("\nThe reverse num of %d is : %d\n", num, reverseNum);

    printf("\nThe reverse of %d is %d%d%d\n", num, units, tens, hundredth );

    return 0;
}
