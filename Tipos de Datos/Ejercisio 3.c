#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingresa dos numeros enteros (separados por un espacio): ");

    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Error: Entrada no valida. Debes ingresar dos numeros enteros.\n");
        return 1; 
    }

    if (num2 == 0) {
        printf("Error: El segundo numero no puede ser cero, ya que no se puede dividir entre cero.\n");
        return 1;
    }

    if (num1 % num2 == 0) {
        printf("El numero %d es multiplo de %d.\n", num1, num2);
    }

    if (num1 % num2 != 0) {
        printf("El numero %d NO es multiplo de %d.\n", num1, num2);
    }

    return 0;
}