#include <stdio.h>

int main() {
    float num1;
    float num2;
    float suma;

    printf("Ingresa el primer numero: ");
    if (scanf("%f", &num1) != 1) {
        printf("Error: Entrada no valida. Debes ingresar un numero.\n");
        return 1;
    }

    printf("Ingresa el segundo numero: ");
    if (scanf("%f", &num2) != 1) {
        printf("Error: Entrada no valida. Debes ingresar un numero.\n");
        return 1;
    }

    suma = num1 + num2;
    printf("El resultado de la suma es: %.2f\n", suma);

    return 0;
}