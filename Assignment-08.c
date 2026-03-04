#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float percentage;
    int isPass = 1;
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];

        if (marks[i] < 40) {
            isPass = 0;
        }
    }

    percentage = (float)total / 5;

    printf("\n--- Result ---\n");
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (isPass == 0) {
        printf("Result: FAIL (Scored less than 40 in one or more subjects)\n");
    } else {
        printf("Result: PASS\n");
        printf("Division: ");
        if (percentage >= 75) {
            printf("Distinction\n");
        } else if (percentage >= 60) {
            printf("First Division\n");
        } else if (percentage >= 50) {
            printf("Second Division\n");
        } else if (percentage >= 40) {
            printf("Third Division\n");
        } else {
            printf("No Division assigned\n");
        }
    }

    return 0;
}