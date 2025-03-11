#include <stdio.h>

int main() {
    int n;
    

    scanf("%d", &n);
    
    
    int rightmost_set_bit = n & -n;
    
    printf("%d\n", rightmost_set_bit);
    
    return 0;
}
