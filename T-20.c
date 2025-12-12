#include <stdio.h>

int main() {
    const long double PI = 3.141592653;
    
    long double R;
    scanf("%Lf", &R);
    long double area = PI * R * R;
    printf("%.9Lf\n", area);
    
    return 0;
}
