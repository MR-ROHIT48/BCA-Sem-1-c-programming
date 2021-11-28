#include<stdio.h>
void main()
{
    int num,r,c,sp=4;
    printf("\n enter any number:");
    scanf("%d",&num);
    for(r=1;r<num;r++)
    {
        for(sp=1;sp<=num-r;sp++)
        printf(" ");
        for(c=1;c<=r;c++)
        printf("* ");
        printf("\n");
        sp--;
        sp=0;
    }
    for(r=num;r>0;r--)
    {
        for(sp=1;sp<=num-r;sp++)
        printf(" ");
        for(c=1;c<=r;c++)
        printf("* ");
        printf("\n");
        sp++;

    }
}
