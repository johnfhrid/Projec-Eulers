#include <stdio.h>

int main()
{
    int max = 0;

    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            int temp = i * j;
            int temp2 = temp;
            int comp = 0;

            while (temp2 > 0)
            {
                int x = temp2 % 10; 
                temp2 /= 10;         
                comp = comp * 10 + x; 
            }
            if (temp == comp)
            {
                if (temp > max)
                {
                    max = temp;
                }
            }
        }
    }

    printf("Largest palindrome: %d\n", max);

    return 0;
}