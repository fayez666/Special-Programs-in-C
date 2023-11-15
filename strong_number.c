/*
what is the strong number?
Strong number is a special number whose sum of factorial of digits is equal to the original number.
For example: 145 is strong number. Since, 1! + 4! + 5! = 145

factorial basis: Factroial of a number is the product of all the integers from 1 to that number.
For example: 5! = 5*4*3*2*1 = 120
in general: n! = n*(n-1)*(n-2)*...*3*2*1

step 1: find the factorial of each digit of the number
q=n ,fact =1 ,result =0;
while(q!=0)
{
    rem = q%10;
    while(rem!=0)
    {
        fact = fact*rem;
        rem--;
    }
    result = result + fact;
    fact = 1;
    q = q/10;
}
step 2: compare the result with the original number
if(result == n)
{
    printf("The number is a strong number");
}
else
{
    printf("The number is not a strong number");
}

*/
#include <stdio.h>

int main()
{
    int n, q, rem, fact = 1, result = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    q = n;
    while (q != 0)
    {
        rem = q % 10;
        while (rem != 0)
        {
            fact = fact * rem;
            rem--;
        }
        result = result + fact;
        fact = 1;
        q = q / 10;
    }
    if (result == n)
    {
        printf("The number is a strong number");
    }
    else
    {
        printf("The number is not a strong number");
    }
    return 0;
}