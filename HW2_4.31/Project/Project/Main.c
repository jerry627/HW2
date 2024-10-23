#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char sign1 = '*';
    char sign2 = ' ';
    int i, j;
    int temp = 4;
    int temp2 = 4;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if ((temp <= j)&&(j<= temp2))
            {
                printf("%c", sign1);
            }    
            else
                printf("%c", sign2);
        }
        printf("\n");
        if (i < 4)
        {
            temp--;
            temp2++;
        }
        else
        {
            ++temp;
            --temp2;
        }
    }
    system("pause");
    return 0;
}