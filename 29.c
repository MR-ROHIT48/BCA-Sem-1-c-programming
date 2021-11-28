#include<stdio.h>
#define max 10
void main()
{
    int x[max];
    int i,se;
    for(i=0;i<max;i++)
    {
        printf("\n enter number:");
        scanf("%d",&x[i]);
    }
    printf("\n enter search element:");
    scanf("%d",&se);
    for(i=0;i<max;i++)
    {
        if(se==x[i])
        {
            printf("\n value found on %d position",i++);
            break;
        }
        if(i==max)
        printf("\n value not found:");
    }
}
