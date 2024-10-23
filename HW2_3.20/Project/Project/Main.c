#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double time, rate, salary;
    while (1)
    {
        printf("Enter of hours worked (-1 to end): ");
        scanf_s("%lf", &time);
        if (time == -1)
            break;
        else
        {
            printf("Enter hourly rate of the worker ($00.00): ");
            scanf_s("%lf", &rate);
            if (time > 40)
                salary = rate * 40 + (time - 40)*1.5*rate;
            else
                salary = rate * time;
            printf("Salary  is $%.2f\n\n", salary);
        }
    }
    system("pause");
    return 0;
}