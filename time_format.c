#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter the total number of seconds : ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = (totalSeconds % 3600) % 60;


   // if (totalSeconds < )
    if (hours < 10)
       printf("0");
       printf("%d : ", hours);
    if (minutes < 10)
        printf("0");
        printf("%d : ", minutes);
    if (minutes < 10)
        printf("0");
        printf("%d\n", seconds);

    printf("\n");
    return (0);

}
