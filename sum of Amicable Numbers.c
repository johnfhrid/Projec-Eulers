#include <stdio.h>

int main ()
{
    int result = 0;
    
    for ( int i = 1; i < 10000; i++)
    {
        int num1 = 1;
        for ( int j = 2; j < i; j++ )
        {
            if ( i % j == 0 )
            {
                num1 += j;
            }
        }
        int num2 = 0;
        for ( int j = 1; j < num1; j++ )
        {
            if ( num1 % j == 0 )
            {
                num2 += j;
            }
        }
        if (i == num2&& i != num1)
        {
            result += i;
        }
    }
    printf("%d", result);
}