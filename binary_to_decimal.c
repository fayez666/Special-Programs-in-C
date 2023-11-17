/*
what is the decimal value of 1011?
1*2^3 + 0*2^2 + 1*2^1 + 1*2^0 = 8 + 0 + 2 + 1 = 11
*/

#include <stdio.h>

int main()
{
    printf("Enter a binary number: ");
    int binary;
    scanf("%d", &binary);
    int decimal = 0;
    int weight = 1;
    while (binary != 0)
    {
        int digit = binary % 10;
        decimal += digit * weight;
        weight *= 2;
        binary /= 10;
    }
    printf("Decimal value: %d\n", decimal);
}