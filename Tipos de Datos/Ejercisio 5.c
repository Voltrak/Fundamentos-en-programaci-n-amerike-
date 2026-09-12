#include <stdio.h>

int main() {
    int numero;
    int d1, d2, d3, d4, d5;

    printf("Ingresa un numero entero de cinco digitos: ");
    
    if (scanf("%d", &numero) != 1) {
        printf("Error: Entrada no valida.\n");
        return 1;
    }

    if (numero < 0) {
        numero = -numero;
    }

    if (numero < 10000) {
        printf("Error: El numero ingresado no tiene cinco digitos.\n");
        return 1;
    }

    if (numero > 99999) {
        printf("Error: El numero ingresado no tiene cinco digitos.\n");
        return 1;
    }

    d1 = (numero / 10000) % 10;
    d2 = (numero / 1000) % 10;
    d3 = (numero / 100) % 10;
    d4 = (numero / 10) % 10;
    d5 = numero % 10;

    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);

    return 0;
}