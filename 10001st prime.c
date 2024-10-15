#include <stdio.h>
#include <math.h>

int main()
{
    int count = 0; 
    int i = 2; 
    unsigned long long currentPrime = 0; 
    while (count < 10001)
    { 
        int isPrime = 1; 
        
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            currentPrime = i; 
            count++; 
        }

        i++; 
    }

    printf("%llu\n", currentPrime); 

    return 0;
}