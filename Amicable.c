#include <stdio.h>

int main ()
{
    int n = 220;
    int new = n;
    int n1;
    int factors = 1;
    int factors1 = 1;
    int sum = 0;
    int sum1= 0;
    
    if ( n > 0)
    {
        for ( int i = n / 2; i >= factors; factors++)
        {
            if ( n % factors == 0 )
            sum += factors;
            n1 = sum;
        }
        //printf("%d\n" , sum);
        for ( int j = n1 / 2; j >= factors1; factors1++ )
        {
            if ( n1 % factors1 == 0 )
            {
                sum1 += factors1;
            }
        }
    }
    //printf("%d" ,sum1);
    if (new == sum1)
    {
        printf("is an Amicable Number");
    }
    else 
    {
        printf("is not Amicable Number");
    }
    
    

}