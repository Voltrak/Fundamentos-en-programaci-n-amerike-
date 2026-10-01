#include <stdio.h>

int main() {
    float numero;
    float suma = 0;

    printf("Ingresa un numero positivo (-1 para terminar): ");
    if (scanf("%f", &numero) != 1) {
        printf("Error: Entrada no valida.\n");
        return 1;
    }

    while (numero != -1) {
        if (numero >= 0) {
            suma = suma + numero;
        } else {
            printf("Error: Ingresa solo numeros positivos.\n");
        }

        printf("Ingresa otro numero positivo (-1 para terminar): ");
        if (scanf("%f", &numero) != 1) {
            printf("Error: Entrada no valida.\n");
            return 1;
        }
    }

    printf("La suma total es: %.2f\n", suma);

    return 0;
}