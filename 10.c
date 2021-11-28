#include<stdio.h>
void main()
{
    int i,n,x,r,sum;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of range for series:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=r*x;
        sum+=r;
    }
    printf("\n The sum is:");
    printf("%d\n",&sum);
}
