#include <stdio.h>

int main()
 {
    unsigned long long n = 600851475143;
    int max = 0;

    for (int i = 2; i <= n; i++) 
    {
        while (n % i == 0) 
        {
            max = i;  
            n /= i;   
        }
    }

    printf("Largest prime factor: %lu\n", max);

    return 0;
}