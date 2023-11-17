/*
what is the leap year?
A leap year is a year that is divisible by 4, but not by 100 unless it is also divisible by 400.
having 366 days in a year.
the extra day is added in the month of february.
leap year arrives after every 4 years.
How to check if a year is leap year or not?
if year diviable by 400 then it is a leap year.
for example: 2000 is a leap year.
if year is not divisible by 400 but divisible by 100 then it is not a leap year.
for example: 1700 is not a leap year.
if year is not divisible by 400, not divisible by 100 but divisible by 4 then it is a leap year.
for example: 2004 is a leap year.
if year is not divisible by 400, not divisible by 100 and not divisible by 4 then it is not a leap year.
for example: 2019 is not a leap year.
*/

#include <stdio.h>

int main()
{
    printf("Enter the year: ");
    int year;
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}