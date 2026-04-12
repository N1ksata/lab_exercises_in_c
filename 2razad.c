#include <stdio.h>

void smeni_kanal(int *distancionno) {
    printf("PREDI -? %d\n", *distancionno);
    *distancionno = 7;
    printf("SEGA -? %d\n", *distancionno);
}

int main() {
    int TV =5;
    smeni_kanal(&TV);
    return 0;
}
