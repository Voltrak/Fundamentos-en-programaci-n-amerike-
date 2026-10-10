#include <stdio.h>

int main(void) {
    int valor;
    int resultado;

    // El predecremento resta primero y luego entrega el nuevo valor.
    valor = 5;
    resultado = --valor;
    printf("Con predecremento: resultado = %d, valor = %d\n", resultado, valor);

    // El postdecremento entrega primero el valor y luego lo resta.
    valor = 5;
    resultado = valor--;
    printf("Con postdecremento: resultado = %d, valor = %d\n", resultado, valor);

    return 0;
}
