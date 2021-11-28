#include<stdio.h>
void main()
{
    int num,r,c,sp;
    printf("\n enter any num:");
    scanf("%d",&num);
    for(r=1;r<=num;r++)
    {
        for(sp=1;sp<=num;sp++)
            printf(" ");
        for(c=1;c<=r;c++)
       printf("%c",c+64);
       printf("\n");
    }
}
