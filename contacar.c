#include <stdio.h>

int main() {
    int c, conta = 0;

    while ( (c = getchar() != EOF)) {   
        conta++;
    }
    printf("I caratteri presenti sono: %d\n", conta);

    return 0;
}