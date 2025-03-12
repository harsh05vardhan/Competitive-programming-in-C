#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) { 
        
        if (num % i == 0) return 0;
    }
    return 1;
}

int isProductOfTwoDistinctPrimes(int N) {
    int primes[] = {2, 3, 5, 7, 11};
    int count = sizeof(primes) / sizeof(primes[0]);
    
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (primes[i] * primes[j] == N) {
                return 1; 
            }
        }
    }
    return 0; 
}

int isPerfectSquare(int num) {
    if (num < 1) return 0; 
    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int N;
    scanf("%d", &N);
    
    
    if (N % 2 == 0 && N % 3 == 0 && N % 5 != 0) {
        printf("A\n");
        return 0;
    }
    
    
    if (N > 20 && isProductOfTwoDistinctPrimes(N)) {
        printf("B\n");
        return 0;
    }
    
    
    if ((N % 3 == 0) ^ (N % 7 == 0) && N >= 10 && N < 100) {
        printf("C\n");
        return 0;
    }
    
    
    if (isPerfectSquare(N) && N < 200) {
        printf("D\n");
        return 0;
    }
    
    
    printf("E\n");
    
    return 0;
}
