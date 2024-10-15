#include <stdio.h>

int main ()
{
    int n =  5, factorial = 1;
    
    for ( int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
        printf("%d %d" ,n ,factorial);




}