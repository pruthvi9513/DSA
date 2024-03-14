#include <stdio.h>

int main() {
    int N, sum;

    // Ask the user for the number of even numbers to sum
    printf("Enter the value of N to calculate the sum of the first N even natural numbers: ");
    scanf("%d", &N);

    // Calculate the sum using the formula
    sum = N * (N + 1);

    // Display the result
    printf("The sum of the first %d even natural numbers is: %d\n", N, sum);

    return 0;
}
