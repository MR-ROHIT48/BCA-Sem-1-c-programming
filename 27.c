#include<stdio.h>
void main()
{
    int r,c,sp,num,onum;
    printf("\n enter any number:");
    scanf("%d",&num);
    onum=num;
    for(r=1;r<=num;r++)
    {
        for(sp=1;sp<=r;sp++)
        {
            printf(" ");
        }
        for(c=r;c<=num;c++)
        {
            printf("%d",onum);
        }
        printf("\n");
        onum--;
    }
}
