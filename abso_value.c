 int main(void)
{
    int num;

    printf("Enter Integer value : ");
    scanf("%d", &num);

    if (num > 0)
        printf("The absolute value of %d : %d\n", num, num);
    else if (num < 0)
        printf("The absolute value of %d : %d\n", num, num * (-1));
    else
        printf("num is equal to zero\n");

    return 0;


}

