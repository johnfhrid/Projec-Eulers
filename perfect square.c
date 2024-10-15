#include <stdio.h>
#include <math.h>

int main ()
{
    int num = 2;
    
    int sqare = sqrt(num);
    
    if (sqare * sqare == num)
        printf("Perfect Square");
    else
        printf("Not Perfect Square");
    
    return 0;
}