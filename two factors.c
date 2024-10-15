#include <stdio.h>

// Function to count factors of a number
int countFactors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++)
        if (num % i == 0) count++;
    return count;
}

int main() {
    int num1, num2;
    
    // Input two natural numbers
    printf("Enter two natural numbers: ");
    scanf("%d %d", &num1, &num2);

    // Count factors
    int factors1 = countFactors(num1);
    int factors2 = countFactors(num2);

    // Compare and display result
    if (factors1 > factors2)
        printf("%d has more factors than %d.\n", num1, num2);
    else if (factors2 > factors1)
        printf("%d has more factors than %d.\n", num2, num1);
    else
        printf("Both numbers have the same number of factors.\n");

    return 0;
}