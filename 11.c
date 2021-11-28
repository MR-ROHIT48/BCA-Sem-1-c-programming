#include<stdio.h>
 void main()
{
    int i,n,x,r=1,sum=0;
    printf("Enter the value of X:");
    scanf("%d",&x);
    printf("\nEnter the value of range for series:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=r*x;
        sum+=r;
    }
     printf("\nThe sum is:");
     printf("%d\n",sum);
}

