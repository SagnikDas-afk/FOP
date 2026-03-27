//This function calculate the calculate the factorial of number with or without recursion

#include <stdio.h>

long long factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1);
}


long long factorialIterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Recursive: %d! = %lld\n", num, factorialRecursive(num));
        printf("Iterative: %d! = %lld\n", num, factorialIterative(num));
    }

    return 0;
}
