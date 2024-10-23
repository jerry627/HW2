#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double ac, balance, charge, credit, limit, nbalance;
    while (1)
    {
        printf("Enter account number (-1 to end): ");
        scanf_s("%lf", &ac);
        if (ac == -1)
            break;
        else
        {
            printf("Enter beginning balance: ");
            scanf_s("%lf", &balance);
            printf("Enter total charges: ");
            scanf_s("%lf", &charge);
            printf("Enter total credits: ");
            scanf_s("%lf", &credit);
            printf("Enter credit limit: ");
            scanf_s("%lf", &limit);
            nbalance = balance + charge - credit;
            if (nbalance > limit)
            {
                printf("Account:\t %.2f\n", ac);
                printf("Credit limit:\t %.2f\n", limit);
                printf("Balance:\t %.2f\n", nbalance);
                printf("Credit Limit Exceeded.\n");
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}