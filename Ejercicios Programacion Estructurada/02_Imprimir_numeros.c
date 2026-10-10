#include <stdio.h>

int main(void) {
    int numero = 1;

    // Imprime del 1 al 10 con tres espacios entre cada numero.
    while (numero <= 10) {
        printf("%d", numero);
        if (numero < 10) {
            printf("   ");
        } else {
            printf("\n");
        }
        numero = numero + 1;
    }

    return 0;
}
