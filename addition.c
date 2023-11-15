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