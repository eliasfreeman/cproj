#include <stdio.h>
#include <stdlib.h>

//nth term of an arithmetic sequence

int main()
{

    float a1, d,an;
    int n;

    printf("Enter the Initial Term (a1) : ");
    scanf("%f", &a1);

    printf("Enter the difference in the arithmetic sequence : ");
    scanf("%f", &d);

    printf("Enter the number of elements of the sequence : ");
    scanf("%d", &n);

    an = a1 + (n - 1)*d;

    printf("The nth term of the sequence is : %.2f\n", an);
    return 0;
}

