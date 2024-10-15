#include <stdio.h>

int main ()
{
    int fruit;
    
    scanf("%d", &fruit);
    
    if (fruit > 2  && fruit%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}