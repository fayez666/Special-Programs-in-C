/*
what is the perfect number?

6 is a perfect number because 1 + 2 + 3 = 6
28 is a perfect number because 1 + 2 + 4 + 7 + 14 = 28
496 is a perfect number because 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248 = 496

*/

#include <stdio.h>

int main()
{
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);
    int sum = 0;
    int i;
    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == number)
    {
        printf("%d is a perfect number\n", number);
    }
    else
    {
        printf("%d is not a perfect number\n", number);
    }
}