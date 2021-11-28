#include<stdio.h>
struct product
{
        int p_code;
        char p_name[15];
        float price;
};
    void printprod(struct product *);
    void updateprice(struct product *);
    void main()
{
    struct product x[10];
    int i;
    for(i=0;i<10;i++)
        {
            printf("\n Enter Product Code: ");
            scanf("%d",&x[i].p_code);
            printf("\n Enter Product Name: ");
            scanf("%s",x[i].p_name);
            printf("\n Enter Product Code: ");
            scanf("%.2f",&x[i].price);
        }
    printf("\n Product Details Before Updation In Price");
    printprod(x);
    updateprice(x);
    printf("\n Product Details After Updation In Price");
    printprod(x);
}
    void printprod(struct product *p)
{
    int i;
    printf("\n Product_Code Product_Name Product_Price");
    printf("\n----------------------------------------");
    for(i=0;i<10;i++)
    printf("\n %d \t\t %s \t %.2f",x[i].p_code,x[i].p_name,x[i].price);
}
    void updateprice(struct product *p)
{
    int i;
    for(i=0;i<10;i++)
        {
            x[i].price=x[i].price+x[i].p_name*0.1;
        }
}
