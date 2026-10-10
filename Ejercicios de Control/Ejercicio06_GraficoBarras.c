#include <stdio.h>

int main(void)
{
    int numero;

    printf("Ingresa cinco numeros enteros entre 1 y 30.\n");
    for (int linea = 1; linea <= 5; linea++) {
        printf("Numero %d: ", linea);
        if (scanf("%d", &numero) != 1 || numero < 1 || numero > 30) {
            printf("Entrada no valida: el numero debe estar entre 1 y 30.\n");
            return 1;
        }

        for (int asterisco = 0; asterisco < numero; asterisco++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
