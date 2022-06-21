#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int gradenum, scores, totalscores;
    int tempgradenum;
    float avggrade;

    totalscores = 0;

    printf("Enter total number of courses taken : ");
    scanf("%d", &gradenum);
    tempgradenum = gradenum;

    while (gradenum > 0)
    {
        printf("Enter Score : ");
        scanf("%d", &scores);
        totalscores = totalscores + scores;
        gradenum--;
    }

    avggrade = totalscores/tempgradenum;

    printf("Your average score is %d / %d = %.2f\n", totalscores, tempgradenum, avggrade);

}
