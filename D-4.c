#include <stdio.h>
int main() {
    int n,hour,minute,second,remainder_of_hour;
    scanf("%d",&n);
    hour=n/3600;
    remainder_of_hour=n%3600;
    minute=remainder_of_hour/60;
    second=remainder_of_hour%60;
    printf("%d:%d:%d\n",hour,minute,second);
    return 0;
}
