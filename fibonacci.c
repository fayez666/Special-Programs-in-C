/*
problem: fibonacci series
what is fibonacci series?
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 ....
fibonacci series is a series of numbers in which each number is the sum of the two preceding numbers.

*/

#include <stdio.h>

int main(){
    int a, b,result,n, i;
    a = 0;
    b = 1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i =1; i<=n; i++){
        printf("%d\n",a);
        result = a + b;
        a = b;
        b = result;
    }
}