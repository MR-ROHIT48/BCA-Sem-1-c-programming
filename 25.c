#include<stdio.h>
void main()
{
    int num,i, r, c;
    printf("\n enter any number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(r=i;r<num;r++)
        {
            printf(" ");
        }
        for(c=1;c<(i*2);c++)
        {
                printf("%d",c);
        }
        printf("\n");
    }
    for(i=num;i>=1;i--)
    {
        for(r=num;r>i;r--)
        {
                printf(" ");
        }
        for(c=1;c<(i*2);c++)
        {
                printf("%d",c);
        }
        printf("\n");
    }
}
