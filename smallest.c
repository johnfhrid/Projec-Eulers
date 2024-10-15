#include <stdio.h>

int main()
{
    unsigned long long n = 20; 
    int div= 0;

    while (1)
    {
        div = 1;  
        for (int i = 1; i <= 20; i++)
        {
            if (n % i != 0)
            {
                div = 0;  
                break;  
            }
        }
        if (div) 
        {
            printf("%llu", n);
            break;
        }
        n++; 
    }
}