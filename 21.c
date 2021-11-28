#include<stdio.h>
void main()
{
    int num,r,c,sp,n;
    printf("\n enter any num:");
    scanf("%d",&num);
    for(r=1;r<=num;r++)
    {
        for(sp=1;sp<=num-r;sp++)
        printf(" ");
        for(c=1;c<=r;c++)
            n=1;
            printf("%d",n%2);
            n++;
    }
}
