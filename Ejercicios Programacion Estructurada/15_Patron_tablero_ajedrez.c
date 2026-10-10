#include <stdio.h>

int main(void) {
    int fila = 1;

    // Forma un tablero de 8 por 8 alternando el espacio inicial.
    while (fila <= 8) {
        int columna = 1;
        if (fila % 2 == 0) {
            printf("%s", " ");
        } else {
            // La fila impar empieza directamente con un asterisco.
        }

        while (columna <= 8) {
            printf("%s", "* ");
            columna = columna + 1;
        }
        puts("");
        fila = fila + 1;
    }

    return 0;
}
