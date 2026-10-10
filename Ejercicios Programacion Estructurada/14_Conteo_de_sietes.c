#include <stdio.h>

int main(void) {
    int numero;
    int temporal;
    int digito;
    int cantidad = 0;

    printf("Ingresa un entero no negativo de hasta 5 digitos: ");
    if (scanf("%d", &numero) != 1 || numero < 0 || numero > 99999) {
        printf("Entrada invalida.\n");
        return 1;
    }

    temporal = numero;
    while (temporal > 0) {
        digito = temporal % 10;
        if (digito == 7) {
            cantidad = cantidad + 1;
        } else {
            // El digito no es siete.
        }
        temporal = temporal / 10;
    }

    printf("El numero contiene %d digito(s) 7.\n", cantidad);
    return 0;
}
