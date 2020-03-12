#include <stdio.h>

int main() {
    int c;
    int ns = 0;
    int cifre[10];
    int car = 0;

    for(int i=0; i<10; i++) {
        cifre[i] = 0;
    }
 
    while( (c=getchar()) != EOF) {
        if(c == ' ' || c == '\t' || c == '\n') ns++;
        else if(c >= '0' && c <= '9') cifre[c-'0']++;
        else car++;
    }

    printf("Il numero totale delle spaziature e': %d\n", ns);
    printf("Le cifre presenti singolarmente sono:\n");
    for(int i=0; i<10; i++) {
        printf("%d) %d\n", i, cifre[i]);
    }
    printf("Il numero dei caratteri restanti e': %d\n", car);

    return 0;
}