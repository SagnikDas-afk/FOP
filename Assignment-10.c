#include <stdio.h>

int main() {
    double num1, num2, result;
    int ch, i;
    unsigned long long fact = 1;

    printf("--- Calculator Menu ---\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power (x^y)\n6. Factorial (x!)\n7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);


    switch(ch) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case 5: 
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = 1;
            for(i = 1; i <= (int)num2; i++) {
                result *= num1;
            }
            printf("Result: %.2lf\n", result);
            break;
        case 6: // Factorial (x!) logic using a loop
            printf("Enter a positive integer: ");
            scanf("%lf", &num1);
            fact = 1;
            for(i = 1; i <= (int)num1; i++) {
                fact *= i;
            }
            printf("Result: %llu\n", fact);
            break;
        case 7:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}