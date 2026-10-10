#include <stdio.h>

int main(void)
{
    int cantidad;
    int valor;
    int menor;

    printf("Cuantos valores vas a ingresar? ");
    if (scanf("%d", &cantidad) != 1 || cantidad <= 0) {
        printf("La cantidad debe ser un entero mayor que cero.\n");
        return 1;
    }

    printf("Ingresa el valor 1: ");
    if (scanf("%d", &menor) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    for (int i = 2; i <= cantidad; i++) {
        printf("Ingresa el valor %d: ", i);
        if (scanf("%d", &valor) != 1) {
            printf("Entrada no valida.\n");
            return 1;
        }

        if (valor < menor) {
            menor = valor;
        }
    }

    printf("El menor valor es: %d\n", menor);
    return 0;
}
