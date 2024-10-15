#include <stdio.h>

int main ()
{
    int n, factorial = 1;
    int temp;
    int k;
    int sum = 0;
   
   
   for ( int j = 0; j <= 9; j++)
   { 
           temp = j;
           n = j;
           int k = 9;
        for ( int i = 3; i <= temp; i++)
       {
           while ( k == 9)
           {
                factorial *= temp;
                printf("%d\n" ,factorial);
                k++;
                sum += factorial;
           } 
       }
   } 

}