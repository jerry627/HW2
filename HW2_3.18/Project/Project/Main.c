#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double sale, salary;
    while (1)
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf_s("%lf", &sale);
        if (sale == -1)
            break;
        else
        {
            salary = 200 + sale * 9/100;
            printf("Salary is: %.2f\n\n", salary);
        }
      }
    system("pause");
    return 0;
}
