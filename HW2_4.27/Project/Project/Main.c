#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int hypotenuse, side1, side2, pythagorean_triples;
    printf("Find all Pythagorean triples for sidel, side2, and the hypotenuse all no larger than 500.\n");
    for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
    {
        for (side2 = 1; side2 <= 500; side2++)
        {
            for (side1 = 1; side1 <= 500; side1++)
            {
                pythagorean_triples = side1 * side1 + side2 * side2;
                    if (hypotenuse * hypotenuse == pythagorean_triples)
                        printf("sidel: %d side2: %d hypotenuse: %d \n", side1, side2, hypotenuse);
            }
        }
    }
    system("pause");
    return 0;
}