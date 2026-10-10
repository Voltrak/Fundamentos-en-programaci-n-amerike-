#include <stdio.h>

int main(void)
{
    int numero;
    long long suma = 0;
    int cantidad = 0;

    printf("Ingresa enteros (999 para terminar):\n");

    while (1) {
        if (scanf("%d", &numero) != 1) {
            printf("Entrada no valida.\n");
            return 1;
        }

        if (numero == 999) {
            break;
        }

        suma += numero;
        cantidad++;
    }

    if (cantidad == 0) {
        printf("No se ingresaron valores; no se puede calcular el promedio.\n");
    } else {
        printf("Promedio: %.2f\n", (double)suma / cantidad);
    }

    return 0;
}
