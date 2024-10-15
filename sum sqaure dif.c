#include <stdio.h>
#include <math.h>

int main ()
{
    int add = 0;
    int square = 0;
    int n = 1;
    int num = 100;
    int add2 = 0;
    int square2 = 0;
    int n2 = 1;
    
    for ( int i = 0; i <= 100; i++)
    {
        while ( n <= i )
        {
            square = pow(n, 2);
            add += square;
            n++;
        }
    }
    for ( int j = 0; j <= 100; j++)
    {
        while ( n2 <= j )
        {
            square2 += j;
            add2 = pow(square2, 2);
            n2++;
        }
    }
    printf("%d" , add2 - add);
}