#include<stdio.h>
#include<conio.h>
void main()
{
     int a[5],sum=0,i;
     float avg;
     for(i=0;i<5;i++)
    {
		printf("Enter any 5 numbers: ");
        scanf("%d",&a[i]);
        sum+=a[i];
     }
     avg=sum/5;
     printf("Sum = %d",sum);
	 printf("Average = %f",avg);
     getch();
}
