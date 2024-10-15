#include <stdio.h>
#include <math.h>

int main ()
{
    int n  = 2000000;
    unsigned long long sum = 0;
    int ip;
    
    for ( int i = 2; i < n; i++)
    {
        ip = 1; 
        for ( int j = 2; j <= sqrt(i)+1; j++ )
        {
            if ( i % j == 0)  
            {
                ip = 0;  
                break;
            }
        }
        if (ip)
        {
            sum += i;
        }
    }
    printf("%lu\n", sum);

    return 0;
}