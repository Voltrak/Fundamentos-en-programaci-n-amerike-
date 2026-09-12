#include <stdio.h>

int main() {
    int i;
    int cuadrado;
    int cubo;

    printf("Numero\tCuadrado\tCubo\n");
    printf("------\t--------\t----\n");

    for (i = 0; i <= 10; i++) {
        cuadrado = i * i;
        cubo = i * i * i;
        printf("%d\t%d\t\t%d\n", i, cuadrado, cubo);
    }

    return 0;
}