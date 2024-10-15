#include <stdio.h>

int main ()
{
    int n =  10, factorial = 1;
    int add;
    int x;
    int sum = 0;
    
    for ( int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
        //printf("%d %d\n" ,n ,factorial);
    add = factorial;
    
    while ( add > 0 )
    {
        x = add % 10;
        sum += x;
        add /= 10;
    }
    printf("%d" ,sum);


}