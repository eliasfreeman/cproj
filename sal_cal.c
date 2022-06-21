#include <stdio.h>
#include <stdlib.h>

int main()
{
    double hsal, msal;
    int hours;

    printf("Enter Monthly salary : ");
    scanf("%lf", &msal);

    printf("\nTotal number of hours worked in a month : ");
    scanf("%d", &hours);

    hsal = msal/hours;

    printf("\nMy hourly salary is # %.2lf\n", hsal);

    return 0;
}

