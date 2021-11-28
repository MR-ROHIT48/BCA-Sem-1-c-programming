#include<stdio.h>
void main()
{
    int num,rem,sum;
    printf("\n enter any num:");
    scanf("%d",&num);
    for(sum=0;num>0;num=num/10)
    {
        rem=num%10;
        sum=sum+rem;
    }
    printf("\n sum of the digit of given num=%d",sum);
}
