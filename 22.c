#include<stdio.h>
void main()
{
    int num,i,r,sp=4;
    char ch='A';
    printf("\n enter any num:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(r=1;r<=sp;r++)
        printf(" ");
        for(r=1;r<=i;r++)
        printf("%c",ch+r-1);
        for(r=i-1;r>=1;r--)
        printf("%c",ch+r-1);
        printf("\n");
        sp--;
    }
}
