#include <stdio.h>
void main()
{
    int i, num,odd,even;
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1,odd=0,even=0; i <= num; i++)
    {
        if (i % 2 == 0)
            even = even + i;
        else
            odd = odd + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd);
    printf("Sum of all even numbers = %d\n", even);
}
