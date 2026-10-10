#include <stdio.h>

int main(void) {
    int contador = 1;

    // Imprime 100 asteriscos y un salto de linea despues de cada decimo.
    while (contador <= 100) {
        printf("*");
        if (contador % 10 == 0) {
            printf("\n");
        } else {
            // Continua en la misma linea.
        }
        contador = contador + 1;
    }

    return 0;
}
