#include<stdio.h>
void main()
{
int c, d,num;
char string[] = "C Programming";
printf("\n enter any number:");
scanf("%d",&num);
printf("\n\n");
printf("--------------\n");
for( c = 0 ; c <= num ; c++ )
{
d = c + 6;
printf("|%-12.*s|\n", d, string);
}
printf("|------------|\n");
for( c = num ; c >= 0 ; c-- )
{
d = c + 6;
printf("|%-12.*s|\n", d, string);
}
printf("--------------\n");
}
