#include <stdio.h>
void main()
{
    double num, sum, i;

    printf("\n enter the num: ");
    scanf("%lf", &num);
    for (i = 1,sum=0;i <= num;i++)
    {
        sum =sum+(1/i);
        if (i == 1)
            printf("\n 1 +");
        else if (i == num)
            printf(" (1 / %lf)", i);
        else
            printf(" (1 / %lf) + ", i);
    }
    printf("\n The sum of the given series is %.2lf", sum);
}
