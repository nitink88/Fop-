#include <stdio.h>

int main() {
    int a, b, i;
    int gcd = 1;
    int smallestDiv = -1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Smallest common divisor (other than 1)
    for(i = 2; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            smallestDiv = i;
            break;
        }
    }

    if(smallestDiv == -1)
        printf("No common divisor other than 1\n");
    else
        printf("Smallest common divisor: %d\n", smallestDiv);

    // GCD
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("GCD: %d\n", gcd);

    return 0;
}
