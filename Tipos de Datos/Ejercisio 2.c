#include <stdio.h>

int main() {
    int numero;
    int residuo;

    printf("Ingresa un numero entero: ");

    if (scanf("%d", &numero) != 1) {
        printf("Error: Entrada no valida. Debes ingresar un numero entero.\n");
        return 1;
    }

    residuo = numero % 2;

    if (residuo == 0) {
        printf("El numero %d es par.\n", numero);
    }

    if (residuo != 0) {
        printf("El numero %d es impar.\n", numero);
    }

    return 0;
}