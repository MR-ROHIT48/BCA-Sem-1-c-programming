#include<stdio.h>
void main()
{
    int num,i,j,k,l;
    printf("\n enter any number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(k=num;k>=i;k--)
        printf(" ");
            for(j=1;j<=1;j++)
                printf("%d",j);
            for(l=j-2;l>0;l--)
                printf("%d",l);
                printf("\n");
    }
}
