#include<stdio.h>
void main()
{
    int num,r,c,sp,cnt=1;
    printf("\n enter any number:");
    scanf("%d",&num);
    for(r=1;r<=num;r++)
    {
        for(sp=1;sp<=num;++sp)
        printf(" ");
        cnt++;
        for(c=1;c<=r;c++)
        printf("%d",c);
        printf("\n");
        sp++;
        sp=0;
    }
    for(r=num;r<=1;r--)
    {
        for(sp=1;sp<=num;--sp)
        printf(" ");
        cnt++;
        for(c=1;c<=r;c++)
        printf("%d",c);
        printf("\n");
        sp--;
        sp=1;
    }
}
