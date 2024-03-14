
#include <stdio.h>

int main() {
    int N, sum;

    // Prompt the user to enter the value of N
    printf("Enter the number of first odd natural numbers to sum: ");
    scanf("%d", &N);

    // Calculate the sum of first N odd natural numbers
    sum = N * N; // Since the sum of first N odd numbers is always N squared

    // Display the result
    printf("The sum of the first %d odd natural numbers is: %d\n", N, sum);

    return 0;
}
