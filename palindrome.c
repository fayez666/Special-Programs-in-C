/*
what is the  Palindrome?
A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam, racecar. There are also numeric palindromes, including date/time stamps using short digits 11/11/11 11:11 and long digits 02/02/2020.

what happens when divide a number by 10?
when we divide a number by 10 then the last digit of the number is removed.
for example:
if we divide 123 by 10 then the last digit 3 is removed and the number becomes 12 and remainder is 3.
*/

#include <stdio.h>

int main()
{
    int n, num, res = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while (n != 0)
    {
        rem = n % 10;
        res = res * 10 + rem;
        n /= 10;
    }
    if (num == res)
    {
        printf("%d is a palindrome number", num);
    }
    else
    {
        printf("%d is not a palindrome number", num);
    }
    return 0;
}