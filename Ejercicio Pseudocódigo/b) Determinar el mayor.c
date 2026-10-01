#include <stdio.h>

int main() {
    float num1;
    float num2;

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

    if (num1 > num2) {
        printf("El numero mayor es: %.2f\n", num1);
    } 
    
    if (num2 > num1) {
        printf("El numero mayor es: %.2f\n", num2);
    } 
    
    if (num1 == num2) {
        printf("Ambos numeros son iguales.\n");
    }

    return 0;
}