#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i, j,length,breadth;
    char sign1 = '+';
    char sign2 = ' ';
    printf("Enter length: ");
    scanf_s("%d", &length);
    printf("Enter breadth: ");
    scanf_s("%d", &breadth);
    for (i = 1; i <= length; i++)
    {
        for (j = 1; j <= breadth; j++)
        {
            if ((i == 1) || (i == length) || (j == 1) || (j == breadth))
                printf("%c", sign1); 
            else
                printf("%c", sign2);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}