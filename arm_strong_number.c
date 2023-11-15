/*
what is the armstrong number?
An Armstrong number of order n is a number in which each digit when mulitplied by itself number of times and finally added gives the same number.
for example:
371 is an armstrong number of order 3 because 3^3 + 7^3 + 1^3 = 371
153 is an armstrong number of order 3 because 1^3 + 5^3 + 3^3 = 153
1634 is an armstrong number of order 4 because 1^4 + 6^4 + 3^4 + 4^4 = 1634

how to find the order of a number?

step 1: count the number of digits in the number
count = 0
while (n != 0)
{
    n /= 10;
    count++;
}
step 2: multiply each digit by itself number of times equal to the number of digits in the number
cnt =count;
while (n != 0)
{
    rem = n % 10;
    while (cnt != 0)
    {
        mul *= rem;
        cnt--;
    }
    res += rem;
    cnt = count;
    n /= 10;
    mul = 1;
}
*/
#include <stdio.h>

int main()
{
    int n, num, res = 0, rem, count = 0, mul = 1, cnt;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    cnt = count;
    n = num;
    while (n != 0)
    {
        rem = n % 10;
        while (cnt != 0)
        {
            mul *= rem;
            cnt--;
        }
        res += mul;
        cnt = count;
        n /= 10;
        mul = 1;
    }
    if (num == res)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }
    return 0;
}