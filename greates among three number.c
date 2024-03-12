#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Ask the user to input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 >= num2 && num1 >= num3) {
        // If num1 is greater than or equal to both num2 and num3, num1 is the largest
        printf("%d is the largest number.", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        // If num2 is greater than or equal to both num1 and num3, num2 is the largest
        printf("%d is the largest number.", num2);
    } else {
        // If num1 and num2 aren't the largest, num3 must be the largest
        printf("%d is the largest number.", num3);
    }

    return 0;
}
