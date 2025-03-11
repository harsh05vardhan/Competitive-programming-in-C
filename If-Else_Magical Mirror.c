#include <stdio.h>

int main() {
    int N;

    // Read the input number
    scanf("%d", &N);

    // Check if the number is a natural number
    if (N <= 0) {
        printf("The verdict for the number %d is: INVALID\n", N);
        return 0; // Exit the program for invalid input
    }

    // Initialize condition counters
    int condition1 = (N > 10 && N % 2 == 0);
    int condition2 = (N > 15 && N % 3 == 0);
    int condition3 = (N % 7 == 0);

    // Count how many conditions are satisfied
    int satisfiedConditions = condition1 + condition2 + condition3;

    // Determine the verdict based on the number of satisfied conditions
    const char *verdict;
    if (satisfiedConditions == 3) {
        verdict = "SUPERNATURAL";
    } else if (satisfiedConditions == 2) {
        verdict = "MIRACULOUS";
    } else if (satisfiedConditions == 1) {
        verdict = "MAGICAL";
    } else {
        verdict = "NORMAL";
    }

    // Output the verdict
    printf("The verdict for the number %d is: %s\n", N, verdict);
    return 0;
}
