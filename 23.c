#include<stdio.h>
void main()
{
    int num,i;
    printf("\n enter any number:");
    scanf("%d",&num);
    printf("\n multiplication table of:%d",num);
    printf("\n----------------------------");
      for(i=1;i<=10;i++)
    {
    printf("\n %d*%d=%d",num,i,num*i);
    }
}
