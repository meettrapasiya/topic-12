#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows in the pyramid

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");  // Adjust spaces based on the requirement
        }

        // Print numbers in each row
        for (int j = i; j <= rows; j++) {
            printf("%d", j);
            if (j < rows) {
                printf(" ");  // Print space between numbers except the last one
            }
        }

        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}
