#include<stdio.h>
typedef struct
{
    int x,y;
}POINT;
void display(int,int);
int main()
{
    POINT p1={2,3};
    display(p1.x,p1.y);
}
void display(int a,int b)
{
    printf("coordinates of the point are:%d %d",a,b);

}
