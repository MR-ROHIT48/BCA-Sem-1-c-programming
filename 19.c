#include<stdio.h>
void main()
{
    int num,r,c,sp=4;
    char ch='A';
    printf("\n enter any number:");
    scanf("%d",&num);
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%c",ch++);
            sp--;
        }
        printf("\n");
    }
}
