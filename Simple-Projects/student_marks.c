#include <stdio.h>

int main() {
    int marks[5], sum = 0;
    float avg;

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    avg = sum / 5.0;

    printf("Total: %d\n", sum);
    printf("Average: %.2f\n", avg);

    if (avg >= 90) printf("Grade: A+\n");
    else if (avg >= 75) printf("Grade: A\n");
    else if (avg >= 60) printf("Grade: B\n");
    else if (avg >= 50) printf("Grade: C\n");
    else printf("Grade: Fail\n");

    return 0;
}
