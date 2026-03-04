#include <stdio.h>
#include <math.h>

int main() {
    int n, ch, i;
    unsigned long long fact = 1;
    int count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("\n--- Menu ---");
    printf("\n1. Square Root\n2. Square\n3. Cube\n4. Check Prime\n5. Factorial\n6. Prime Factors\n7. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Square root of %d is %.2f\n", n, sqrt(n));
            break;
        case 2:
            printf("Square of %d is %d\n", n, n * n);
            break;
        case 3:
            printf("Cube of %d is %d\n", n, n * n * n);
            break;
        case 4:
            for (i = 1; i <= n; i++) {
                if (n % i == 0) count++;
            }
            if (count == 2) printf("%d is a Prime Number.\n", n);
            else printf("%d is not a Prime Number.\n", n);
            break;
        case 5:
            fact = 1;
            for (i = 1; i <= n; i++) fact *= i;
            printf("Factorial of %d is %llu\n", n, fact);
            break;
        case 6:
            printf("Prime factors of %d: ", n);
            int temp = n;
            for (i = 2; i <= temp; i++) {
                while (temp % i == 0) {
                    printf("%d ", i);
                    temp /= i;
                }
            }
            printf("\n");
            break;
        default:
            printf("Exiting or invalid choice.\n");
    }

    return 0;
}