#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float avg;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Check pass condition (>= 40 in each subject)
    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        printf("Result: FAIL\n");
    } else {
        // Calculate average
        avg = (m1 + m2 + m3 + m4 + m5) / 5.0;

        printf("Result: PASS\n");
        printf("Percentage: %.2f\n", avg);

        // Assign grade
        if (avg >= 75)
            printf("Grade: Distinction\n");
        else if (avg >= 60)
            printf("Grade: First Division\n");
        else if (avg >= 50)
            printf("Grade: Second Division\n");
        else
            printf("Grade: Third Division\n");
    }

    return 0;
}
