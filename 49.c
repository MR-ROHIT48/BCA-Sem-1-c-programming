
#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[1000];
    int i;
    printf("Enter a String\n");
    gets(s);
    printf("String with all uppercase characters \n%s ",strupr(s));
    getch();
    {
    for(i = 0; s[i] != '\0'; ++i);
    printf("\n Length of string: %d", i);
    return 0;
    }
}
