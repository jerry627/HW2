#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double weekly_salary, time,time_rate, sale,item_rate;
    int employee_type, produce_item;
    while (1)
    {
        printf("Enter the type of employee (-1 to end): ");
        scanf_s("%d", &employee_type);
        if (employee_type == -1)
        {
            break;
        }
        switch(employee_type)
        {
        case 1:
            printf("Enter Managers weekly_salary: ");
            scanf_s("%lf", &weekly_salary);
            printf("Your weekly_salary: $%.2f\n\n", weekly_salary);
            break;
        case 2:
            printf("Enter of hours worked this week: ");
            scanf_s("%lf", &time);
            printf("Enter hourly rate of the worker ($00.00): ");
            scanf_s("%lf", &time_rate);
            if (time > 40)
                weekly_salary = time_rate * 40 + (time - 40)*1.5* time_rate;
            else
                weekly_salary = time_rate * time;
            printf("Your weekly_salary: $%.2f\n\n", weekly_salary);
            break;
        case 3:
            printf("Enter sales in dollars this week: ");
            scanf_s("%lf", &sale);
            weekly_salary = 250 + sale * 57 / 1000;
            printf("Your weekly_salary: %.2f\n\n", weekly_salary);
            break;
        case 4:
            printf("Enter the number of item you produce this week: ");
            scanf_s("%d", &produce_item);
            printf("Enter item rate ($00.00): ");
            scanf_s("%lf", &item_rate);
            weekly_salary = produce_item * item_rate;
            printf("Your weekly_salary: %.2f\n\n", weekly_salary);
            break;
        default:
            printf("It is incorrect type of employee\n\n");
            break;
        }
    }
    system("pause");
    return 0;
}