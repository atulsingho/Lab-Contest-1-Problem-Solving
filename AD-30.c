#include <stdio.h>

int main() {
    char X;
    if (scanf(" %c", &X) != 1) {
        return 1; 
    }
    if (X >= '0' && X <= '9') {
        printf("IS DIGIT\n");
    } 
    else {
        printf("ALPHA\n");
        if (X >= 'A' && X <= 'Z') {
  
            printf("IS CAPITAL\n");
        } 
   
        else if (X >= 'a' && X <= 'z') {

            printf("IS SMALL\n");
        }
    }

    return 0;
}

