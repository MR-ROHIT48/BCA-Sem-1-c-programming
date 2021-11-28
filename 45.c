#include<stdio.h>
void main()
{
    char x[10];
    int l;
    printf("\n enter your name:");
    scanf("%s",x);
    for(l=0;x[l]!='\0';l++)
    {
        x[l]=x[l]-32;
    }
    printf("\n length is:",l);
}
