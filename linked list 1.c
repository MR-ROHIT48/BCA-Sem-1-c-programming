#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch,val,key;
    do{
    printf("\n |------------MENU-------------------|");
    printf("\n  1.INSERT");
    printf("\n  2.DISPLAY");
    printf("\n  3.DELETE");
    printf("\n  4.Insert before");
    printf("\n  5.Insert after");
    printf("\n  6.Sort");
    printf("\n  7.EXIT");
    printf("\n |-----------------------------------|");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\n Enter value:");
        scanf("%d",&val);
        insert(val);
    }
    else if(ch==2)
    {
        display();
    }
    else if(ch==3)
    {
        printf("\nEnter value which you want to delete:");
        scanf("%d",&val);
        delnode(val);
    }
    else if(ch==4)
    {
        printf("\n Enter value:");
        scanf("%d",&val);
        printf("\n Enter key num:");
        scanf("%d",&key);
        insbfr(val,key);
    }
    else if(ch==5)
    {
        printf("\n Enter value:");
        scanf("%d",&val);
        printf("\n Enter key num:");
        scanf("%d",&key);
        insafr(val,key);
    }
    else if(ch==6)
    {
        sort();
    }
    else if(ch==7)
    {
        printf("\n GOOD BYE THE LINKED LIST!!!");
    }
    else
    {
        printf("\n INVALID INPUT OR CHOICE");
    }
    }while(ch!=7);
}
struct node
{
    int data;
    struct node *next;
}*first = NULL;
void insert(int val)
{
    struct node *new1,*curr;
        new1=(struct node *)malloc(sizeof (struct node));
        new1->data=val;
        new1->next=NULL;

        if(first==NULL)
            {
                first=new1;
                return;
            }
        curr=first;

        while(curr->next!=NULL)
            {
                curr=curr->next;
            }
            curr->next=new1;
}
void display()
{
    struct node *curr;
    if(first==NULL)
    {
        printf("\n LINKED-LIST IS EMPTY");
        return;
    }
    curr=first;
    while(curr!=NULL)
    {
        printf("%d-->",curr->data);
        curr=curr->next;
    }
}
void delnode(int val)
{
    struct node *curr,*prev;
    if(first==NULL)
    {
        printf("\n LINK-LIST IS EMPTY");
        return;
    }
    curr=first;
    if(first->data==val)
    {
        first=first->next;
        free(curr);
        return;
    }
    while(curr->data!=val && curr->next!=NULL)
    {
        prev = curr;
        curr=curr->next;
    }
    if(curr->next==NULL)
    {
        printf("\n Value does not exist");
        return;
    }
    prev->next = curr->next;
    free(curr);
}
void insbfr(int val,int key)
{
    struct node *new1,*curr,*prev;
    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=NULL;
    if(first==NULL)
    {
        printf("\n LINK LIST IS EMPTY");
        return;
    }
    curr=first;
    if(curr->data==key)
    {
        first=new1;
        first->next=curr;
        return;
    }
    while(curr->data!=key && curr->next!=NULL)
    {
        prev = curr;
        curr=curr->next;
    }
    if(curr->next==NULL)
    {
        printf("\n KEY DOES NOT EXIST");
        return;
    }
    prev->next=new1;
    new1->next=curr;
}
void insafr(int val,int key)
{
    struct node *new1,*curr;
    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=NULL;
    if(first==NULL)
    {
        printf("\n LINK LIST IS EMPTY");
        return;
    }
    curr=first;
    while(curr->data!=key && curr->next!=NULL)
    {
        curr=curr->next;
    }
    if(curr->next==NULL)
    {
        printf("\n KEY DOES NOT EXIST");
        return;
    }
    new1->next=curr->next;
    curr->next=new1;
}
void sort()
{
 struct node *i,*j;
 int temp;
 if(i==NULL)
 {
    printf("\n LINK LIST IS EMPTY");
    return;
 }
 i=first;
 while(i->next!=NULL)
 {
    j=i->next;
    while(j!=NULL)
    {
        if(j->data < i->data)
        {
            temp= i->data;
            i->data = j->data;
            j->data = temp;
        }
        j=j->next;
    }
    i=i->next;
 }
}

