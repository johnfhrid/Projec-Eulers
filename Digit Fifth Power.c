#include <stdio.h>
#include <math.h>

int main()
{
    int count = 2; 
    int sumOfAll = 0;

    while (count < 354294)
    {
        int sum = 0;
        int n = count;
        int original = n;
        int x;

        while (n > 0) 
        {
            x = n % 10;
            n /= 10;
            sum += pow(x, 5);
        }
        if (sum == original)
        {
            sumOfAll += sum;
        }

        count++;
    }

    printf("%d\n", sumOfAll);

    return 0;
}