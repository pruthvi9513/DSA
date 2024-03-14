#include <stdio.h>

int main() {
    int i;

    printf("The first 10 natural numbers in reverse order are:\n");
    for(i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}

