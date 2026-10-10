#include <stdio.h>

int main(void) {
    int lado;
    int fila = 1;

    printf("Ingresa el lado del cuadrado (1 a 20): ");
    if (scanf("%d", &lado) != 1 || lado < 1 || lado > 20) {
        printf("Entrada invalida: el lado debe estar entre 1 y 20.\n");
        return 1;
    }

    // Cada ciclo imprime una fila completa de asteriscos.
    while (fila <= lado) {
        int columna = 1;
        while (columna <= lado) {
            printf("*");
            columna = columna + 1;
        }
        printf("\n");
        fila = fila + 1;
    }

    return 0;
}
