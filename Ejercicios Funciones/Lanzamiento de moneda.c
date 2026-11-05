#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanzar() {
    return rand() % 2;
}

int main() {
    int caras = 0;
    int cruces = 0;
    int resultado;

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        resultado = lanzar();
        if (resultado == 0) {
            printf("Cruz\n");
            cruces++;
        } else {
            printf("Cara\n");
            caras++;
        }
    }

    printf("\nTotal de Caras: %d\n", caras);
    printf("Total de Cruces: %d\n", cruces);

    return 0;
}