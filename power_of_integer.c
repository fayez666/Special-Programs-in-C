/*
a^b = a x a x a ... b times where a is an integer and b is a positive integer
for example: 2^3 = 2 x 2 x 2 = 8
2 ^-3 = 1 / 2^3 = 1 / 8 = 0.125
*/

#include <stdio.h>

int main()
{
    printf("Enter the base: ");
    int base;
    scanf("%d", &base);
    printf("Enter the exponent: ");
    int exponent;
    scanf("%d", &exponent);
    int power = 1, expo;
    expo = exponent;
    double power1 = 1.0;
    if (exponent > 0)
    {
        while (exponent != 0)
        {
            power *= base;
            exponent--;
        }
        printf("%d^%d = %d\n", base, expo, power);
    }
    else
    {
        while (exponent != 0)
        {
            power1 = power1*(1.0 / base);
            exponent++;
        }
        printf("%d^%d = %10f\n", base, expo, power1);
    }
}