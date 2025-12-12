#include <stdio.h>

int main() {
    int total_days;
    if (scanf("%d", &total_days) != 1) {
        return 1;
    }
    int years = total_days / 365;
    int remaining_days = total_days % 365;
    int months = remaining_days / 30;
    int days = remaining_days % 30;
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}
