#include <stdio.h>
int main() {
    int k,b,c,count=0;
    scanf("%d %d %d",&k,&b,&c);
    for(int i=k;i<=b;i++) {
        if (c%i==0) {
            count++;
        }

    }
    printf("%d\n",count);

    return 0;
}
