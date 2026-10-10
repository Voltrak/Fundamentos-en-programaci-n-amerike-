#include <stdio.h>

int main(void) {
    int numero;
    int original;
    int invertido = 0;
    int digito;

    printf("Ingresa un entero de cinco digitos: ");
    if (scanf("%d", &numero) != 1 || numero < 10000 || numero > 99999) {
        printf("Entrada invalida: debe ser un entero positivo de cinco digitos.\n");
        return 1;
    }

    original = numero;
    // Construye el numero al reves usando sus digitos.
    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    if (original == invertido) {
        printf("%d es un palindromo.\n", original);
    } else {
        printf("%d no es un palindromo.\n", original);
    }

    return 0;
}
