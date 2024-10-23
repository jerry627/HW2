#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double principal, rate, day, charge;
    while (1)
    {
        printf("Enter loan principal (-1 to end): ");
        scanf_s("%lf", &principal);
        if (principal == -1)
            break;
        else
        {
            printf("Enter interest rate: ");
            scanf_s("%lf", &rate);
            printf("Enter term of the loan in days: ");
            scanf_s("%lf", &day);
            charge = principal*rate*day / 365;
            printf("The interest charge is $%.2f\n\n", charge);
        }
    }
    system("pause");
    return 0;
}

