#include<stdio.h>
int main()
{
char s[]="cprograming";
int i,j,num;
printf("\n enter any number:");
scanf("%d",&num);
for(i=0;s[i];i++)
{
for(j=0;j<=i;j++)

printf("%c",s[j]);
printf("\n");
}
return 0;
}
