/*
     *
    ***
   *****
  *******
  3 rows and 5 columns
  4 rows and 7 columns
  5 rows and 9 columns
  6 rows and 11 columns
  if n is no of rows then no of columns is 2n-1

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// another method
int main()
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i)
            {
                printf("%d", i + j - n);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}