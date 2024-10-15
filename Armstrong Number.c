#include <stdio.h>
#include <math.h>

int main ()
{
    int n;
    scanf("%d", &n);
    
    int num = n;
    int adp = 0; 
    
  
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        adp++;
    }

    int x;
    int sum = 0;
    
    while (n > 0)
    {
        x = n % 10;  
        n /= 10;   
        sum += pow(x, adp); 
    }    
    if (sum == num)
    {
        printf("is an Armstrong Number\n");
    }
    else 
    {
        printf("is not an Armstrong Number\n" );
    }
}