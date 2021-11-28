#include<stdio.h>
void main()
{
    int x[3][3],y[3][3],z[3][3];
    int i,j;
    printf("\n enter value for matrix 1:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter value:");
            scanf("%d",&x[i][j]);
        }
    }
        printf("\n enter value for matrix 2:");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter value:");
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
    }
    printf("\n matrix 1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",x[i][j]);
        }
        printf("\n");
    }
     printf("\n matrix 2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",y[i][j]);
        }
        printf("\n");
    }
     printf("\n matrix 3:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",z[i][j]);
        }
        printf("\n");
    }
}
