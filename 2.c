#include<stdio.h>
void main()
{
    int num,i,fact;
    printf("\n enter any number:");
    scanf("%d",&num);
    for(i=1,fact=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("\n factorial of%d is=%d",num,fact);
}
