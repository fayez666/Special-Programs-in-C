/*
problem statement:
Write a program to add two numbers without using `+` operator.
Idea is to use Increment and Decrement operators.

suppose we have two numbers x=3 and y=5.

Algorithm:
step 1 : x++; y--; // increment x and decrement y
step 2: if y is greater than 0 then goto step 1
*/
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    while (y > 0)
    {
        x++;
        y--;
    }
    printf("The sum is %d", x);
    return 0;
}

int main()
{

    int x, y;

    printf("Enter the number to add : ");

    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)

    {

        while (y != 0)

        {

            x++;

            y--;
        }

        printf("The sum is: %d ", x);
    }

    else if (x < 0 || x < 0 && y < 0)

    {

        while (x != 0)

        {

            y--;

            x++;
        }

        printf("The sum is: %d ", y);
    }

    else if (y < 0)

    {

        while (y != 0)

        {

            x--;

            y++;
        }

        printf("The sum is: %d ", x);
    }

    else

        printf("You have entered imaginary number ");

    return 0;
}