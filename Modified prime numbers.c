#include <stdio.h>
#include <math.h>

int main()
{
    int lim = 0;
    printf("Enter the Limit here: ");
    scanf("%d",&lim);

    for(int i = 1; i < lim; i++)
    {
        int isPrime = 0;
        for(int j = 2; j < (int) (sqrt(i)+1); j++)
        {
            if ((i % j == 0))
            {
                isPrime = 1;
                break;
            }
        }

        if (!isPrime)
            printf("%d ",i);
    }
}