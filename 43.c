#include <stdio.h>
 void main()
{
    int n1 = 0, n2 = 0, logic = 0, i;
    char s1[10], s2[10];
    printf("Enter a string:");
    gets(s1);
    printf("Enter another string:");
    gets(s2);
    while (s1[n1] != '\0')
        n1++;
    while (s2[n2] != '\0')
        n2++;
    i = 0;
    while ((i < n1) && (i <n2))
    {
        if (s1[i] == s2[i])
        {
            i++;
            continue;
        }
        if (s1[i] < s2[i])
        {
            logic = -1;
            break;
        }
        if (s1[i] > s2[i])
        {
            logic= 1;
            break;
        }
    }
    if (logic == 0)
        printf("Both strings are equal \n");
    if (logic == 1)
        printf("String1 is greater than string2 \n", s1, s2);
    if (logic == -1)
        printf("String1 is less than string2 \n", s1, s2);
}
