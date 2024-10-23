#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i, j;
    int temp = 0;
    printf("(a)\n");
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if (j <= temp)
            {
                printf("%s", "*");
            }    
            else
                printf("%s", " ");
        }
        printf("\n"); 
        temp++;
    }
    printf("\n");
    printf("(b)\n");
    temp = 9;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if (j <= temp)
            {
                printf("%s", "*");
            }
            else
                printf("%s", " ");
        }
        printf("\n");
        temp--;
    }
    printf("\n");
    printf("(c)\n");
    temp = 0;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if ((temp <= j) && (j <= 9))
            {
                printf("%s", "*");
            }
            else
                printf("%s", " ");
        }
        printf("\n");
        temp++;
    }
    printf("\n");
    printf("(d)\n");
    temp = 9;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if ((temp <= j) && (j <= 9))
            {
                printf("%s", "*");
            }
            else
                printf("%s", " ");
        }
        printf("\n");
        temp--;
    }
    system("pause");
    return 0;
}