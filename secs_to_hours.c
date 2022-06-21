#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalSeconds, hours, minutes;
    float seconds;

    printf("Enter the total number of seconds : ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = (totalSeconds % 3600) % 60;

    printf("\nThe conversion is %d hour(s), %d minutes, %.2f seconds\n", hours, minutes, seconds);

    return 0;
}
