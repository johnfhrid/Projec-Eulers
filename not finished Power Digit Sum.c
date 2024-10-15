#include <stdio.h>
#include <math.h>

int main ()
{
    int p = 2;
    unsigned long long sum = 0;
    int x;
    unsigned long long add = 0;
    unsigned long long temp;
    
    sum = pow(p, 100);
    
    temp = sum;
    
    while ( temp > 0 )
    {
        x = temp % 10;
        add += x;
        temp /= 10;
    }
    printf("%lu" , add);

}