#include <stdio.h>

int main() {
    int h, t;
    float c;
    scanf("%d %f %d", &h, &c, &t);
    int grade = 5;
    if (h > 50 && c < 0.7 && t > 5600) {
        grade = 10;
        printf("The grade of the steel is: %d\nAll of the conditions met.\n", grade);
    } else if (h > 50 && c < 0.7) {
        grade = 9;
        printf("The grade of the steel is: %d\nTwo conditions met.\n", grade);
    } else if (c < 0.7 && t > 5600) {
        grade = 8;
        printf("The grade of the steel is: %d\nTwo conditions met.\n", grade);
    } else if (h > 50 && t > 5600) {
        grade = 7;
        printf("The grade of the steel is: %d\nTwo conditions met.\n", grade);
    } else if (h > 50 || c < 0.7 || t > 5600) {
        grade = 6;
        printf("The grade of the steel is: %d\nOnly one condition met.\n", grade);
    } else {
        printf("The grade of the steel is: %d\nNone of the conditions met.\n", grade);
    }

    return 0;
}
