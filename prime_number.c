/*
what is prime number?
A prime number is a number that is divisible only by 1 and itself.
For example: 2, 3, 5, 7, 11, 13, 17, 19, 23 etc.

composite number: A composite number is a number that is not prime.
question: Is 1 a prime number?
answer: No, 1 is not a prime number. 1 is neither prime nor composite.
anthor answer: it violates the fumdamental theorem of arithmetic.
according to this theorem, every number can be expressed as a product of prime numbers in a unique way.

step 1 : Takes square root of the number to be checked. Let it be n.
step 2 : Divide the number by all the prime numbers less than or equal to n. If the number is divisible by any prime number then the number is not prime. Otherwise, it is prime.
*/

#include <math.h>
#include <stdio.h>

int main()
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("The number is not prime");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The number is prime");
    }
    return 0;
}

// anthor method
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int i, val1, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    val1 = ceil(sqrt(x));
    for (i = 2; i <= val1; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
        }
    }
    if ((flag == 0) && (x != 1) || (x == 2) || (x == 3))
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
}
