#include<stdio.h>
void main()
{
    int num,n1,n2,sum;
    printf("\n enter any num:");
    scanf("%d",&num);
    n1=0;
    n2=1;
    printf("\n fibonacii series");
    printf("\n-----------------");
    sum=n1+n2;
    printf("\n%d \n%d",n1,n2);
    for(;sum<=num;)
    {
        printf("\n %d",sum);
        n1=n2;
        n2=sum;
        sum=n1+n2;
    }
}
