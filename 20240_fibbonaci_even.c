#include <stdio.h>

int main ()
{
    int num1 = 0, num2 = 1, sum = 0;
    
    for ( int i = 0; num1 < 400000, num2 < 4000000; num1 += num2,  num2 += num1)
    {
        if (num1 % 2 == 0)
        {
            sum += num1;
        }
        if (num2 % 2 == 0)
        {
            sum += num2;
        }
    }    
        printf("%d\n", sum);
    
    return 0;
}