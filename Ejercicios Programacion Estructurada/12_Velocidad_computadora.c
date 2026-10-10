#include <stdio.h>

int main(void) {
    unsigned long long contador = 1;
    const unsigned long long limite = 1000000000ULL;

    // Informa cada vez que termina un bloque de cien millones.
    while (contador <= limite) {
        if (contador % 100000000ULL == 0) {
            printf("Iteraciones completadas: %llu\n", contador);
        } else {
            // No se imprime en las iteraciones intermedias.
        }
        contador = contador + 1;
    }

    return 0;
}
