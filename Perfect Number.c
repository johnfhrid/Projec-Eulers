#include <stdio.h>
#include <math.h>

int main () {
    int i, n;
    int factors = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= sqrt(n); i++) { 
        if(n % i == 0) {
            if (i == n / i) {
                factors++; 
            } else {
                factors += 2;  
            }
        }
    }

    if (factors == 2) { 
        printf("Is a Prime\n");
    } else {
        printf("Is not a Prime\n");
    }

    return 0;
}