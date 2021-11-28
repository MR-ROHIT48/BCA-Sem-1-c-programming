#include<stdio.h>
void main()
{
    int n1,n2,gcd,lcm,rem,numenator,denominator;
    printf("enter any two num:");
    scanf("%d%d",&n1,&n2);
    numenator=n1;
    denominator=n2;
    for(;rem!=0;rem=numenator%denominator)
    {
        gcd=denominator;
        lcm=n1*n2/gcd;
    }
    printf("gcd of %d and %d=%d\n",n1,n2,gcd);
    printf("lcm of %d and %d=%d\n",n1,n2,lcm);
}
