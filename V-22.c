#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);
    long long summation = N * (N + 1) / 2;
    printf("%lld\n", summation);

    return 0;
}
