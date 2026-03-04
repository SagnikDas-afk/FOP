#include <stdio.h>

int main() {
    int num1, num2, scd, gcd, i, min_value, max_value;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    min_value = (num1 < num2) ? num1 : num2;


    scd = 0;
    for (i = 2; i <= min_value; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            scd = i;
            break;
        }
    }
    int a = num1, b = num2, temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    printf("\n--- Results ---");
    if (scd != 0) {
        printf("\nSmallest Common Divisor (SCD): %d", scd);
    } else {
        printf("\nSmallest Common Divisor (SCD): None (other than 1)");
    }
    printf("\nGreatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}