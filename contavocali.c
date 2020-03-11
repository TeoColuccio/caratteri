#include <stdio.h>

int main() {
    int c;
    int vocali = 0;

    while ( (c = getchar()) != EOF) {
        switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vocali++;
            break;
        default:
            break;
        }
    }
    
    printf("Le vocali sono %d\n", vocali);

    return 0;
}