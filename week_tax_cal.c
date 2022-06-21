#include <stdio.h>
#include <stdlib.h>

int main()
{


    int hoursWorked, grossPay, netPay, taxRate;
    int fullPay;
    int totalPay;

    fullPay = 40 * 12;


    printf("Enter number of hours worked : ");
    scanf("%d", &hoursWorked);


    if (hoursWorked <= 40)
        totalPay = hoursWorked * 12;
    else
        totalPay = 18*(hoursWorked - 40) + fullPay;

    grossPay = totalPay;


    if (grossPay <= 300)
        taxRate = (0.15 * grossPay);
    else if (grossPay > 300 && grossPay <= 450)
        taxRate= 0.20 * grossPay;
    else
        taxRate = 0.25 * grossPay;

    netPay = grossPay - taxRate;


    if (netPay > 0)
        printf("Your gross pay is $ %d, Your tax is $ %d and your net pay is $ %d\n", grossPay, taxRate, netPay);
    else
        printf("No payment for you this week\n");



    return (0);

}
