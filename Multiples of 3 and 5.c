#include <stdio.h>


int main()
{
    int x;
    int sum = 0;

    for ( x = 1; x < 1000; x++)
    {
        if (x % 3 == 0 | | x % 5 ==0)
        {
            sum += x;
        }

    }
    printf("Sum of multiples of 5 or 3 less than 1000: %d", sum);
    return 0;
}