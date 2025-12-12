#include <stdio.h>

int main() {
    long long A, B, C, D;
    if (scanf("%lld %lld %lld %lld", &A, &B, &C, &D) != 4) {
        return 1; 
    }
    const int MOD = 100;
    long long result = A % MOD; 
    result = (result * (B % MOD)) % MOD;
    result = (result * (C % MOD)) % MOD;
    result = (result * (D % MOD)) % MOD;
    printf("%02lld\n", result);
    
    return 0;
}
