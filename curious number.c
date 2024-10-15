#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;
    int fact;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        fact = 1;

        for (int i = 1; i <= digit; i++) 
        {
            fact *= i;
        }

        sum += fact; 
        temp /= 10;  
    }
    printf("%d\n" ,sum);

    if (sum == num) {
        printf("is a curious number.");
    } else {
        printf("is not a curious number.");
    }

    return 0;
}