#include<stdio.h>
int digit(float,int);
void main()
{
 float num;
 int pos;
 printf("\nEnter a number : ");
 scanf("%f",&num);
 printf("Enter position from right : ");
 scanf("%d",&pos);
 printf("\nNo. required :%d",digit(num,pos));

}
int digit(float n,int p)
{
 int a,temp;
 for(a=0;a<p;a++)
 {
	temp=(int)n%10;
	n=n/10;
 }
 return temp;
}
