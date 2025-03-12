#include <stdio.h>

int main() {
    long long X, Y, Z;

    
    scanf("%lld %lld %lld", &X, &Y, &Z);

    
    int divisibleByY = (X % Y == 0);
    int divisibleByZ = (X % Z == 0);

    
    if (divisibleByY && divisibleByZ) {
        printf("X defeats all!\n");
    } else if (divisibleByY) {
        printf("Y triumphs over X!\n");
    } else if (divisibleByZ) {
        printf("Z outsmarts X!\n");
    } else {
        printf("X remains undefeated!\n");
    }

    return 0;
}
