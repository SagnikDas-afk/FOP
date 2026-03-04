#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    // Step 1: Read num
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Step 2: Assign temp = num and sum = 0
    temp = num;

    // Step 3: While temp > 0
    while (temp > 0) {
        // Find digit = temp % 10
        digit = temp % 10;
        
        // Add cube of digit to sum: sum = sum + digit^3
        sum = sum + (digit * digit * digit);
        
        // Update temp = temp / 10
        temp = temp / 10;
    }

    // Step 4: Check if sum == original number
    if (sum == num) {
        printf("%d is an Armstrong Number.\n", num);
    } else {
        printf("%d is NOT an Armstrong Number.\n", num);
    }

    return 0;
}