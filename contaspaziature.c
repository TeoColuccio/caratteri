#include <stdio.h>

int main() {
    int c;
    int nl = 0; 
    int nt = 0;
    int ns = 0;

    while ( (c = getchar()) != EOF) {
        switch (c) {
        case '\n':
            nl++;
            break;
        case '\t':
            nt++;
            break;
        case ' ':
            ns++;
            break;
        default:
            break;
        }
    }
    printf("Le linee presenti sono: %d\n", nl);
    printf("Le tabulazioni presenti sono: %d\n", nt);
    printf("Le spaziature presenti sono: %d\n", ns);

    return 0;
}