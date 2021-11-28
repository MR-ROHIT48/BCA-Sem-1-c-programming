#include<stdio.h>
void main()
{
    int num,r,c,sp;
    printf("\n enter any number:");
    scanf("%d",&num);
    for(r=1;r<=num;r++)
    {
        for(sp=1;sp<=num-r;sp++)
        {
            printf(" ");
        }
        for(c=1;c<=4;c++)
        {
            printf("%c",c);
        }
        for(c=r-1;c>=1;c--);
        {
            printf("%c",c);
        }
        printf("\n");
    }
}
