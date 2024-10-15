#include <stdio.h>

int main ()
{
    int max = 0;
    unsigned long long temp;
    int s;
    int maxnum = 0;
    unsigned long long i;
    for ( i = 1; i <= 1000000; i++)
    {
        temp = i;
        s = 1;
        while (temp != 1)
        {
             if (temp % 2 == 0)
        {
            temp /= 2;
        }
        else
        {
            temp = 3 * temp + 1;
        }
            s++;
        }
        if ( s > max)
        {
            max = s;
            maxnum = i;
        }
    }
    printf("%lu" ,maxnum);
}