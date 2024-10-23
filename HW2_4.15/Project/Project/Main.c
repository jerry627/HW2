#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double time, rate=0.1, amount=5000;
    for (time = 1; time <= 15; time++)
    {
        amount = amount * (1 + rate);
        rate = rate + 0.005;
    }
    printf("Amount= %.2f", amount);
    system("pause");
    return 0;
}