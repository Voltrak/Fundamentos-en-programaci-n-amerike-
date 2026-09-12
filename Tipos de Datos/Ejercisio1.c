#include <stdio.h>

int main() {
    int num1, num2, num3;
    int suma, producto, menor, mayor;
    float promedio;


    printf("Ingresa tres numeros enteros diferentes (separados por espacios): ");

    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Error: Entrada no valida. Debes ingresar tres numeros enteros.\n");
        return 1; 
    }

    if (num1 == num2) {
        printf("Error: Los numeros deben ser diferentes (el 1ro y 2do son iguales).\n");
        return 1;
    }
    if (num1 == num3) {
        printf("Error: Los numeros deben ser diferentes (el 1ro y 3ro son iguales).\n");
        return 1;
    }
    if (num2 == num3) {
        printf("Error: Los numeros deben ser diferentes (el 2do y 3ro son iguales).\n");
        return 1;
    }

    suma = num1 + num2 + num3;

    promedio = suma / 3.0;

    producto = num1 * num2 * num3;

    menor = num1; 
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    mayor = num1; 
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    printf("La suma es: %d\n", suma);
    printf("El promedio es: %.2f\n", promedio);
    printf("El producto es: %d\n", producto);
    printf("El menor valor es: %d\n", menor);
    printf("El mayor valor es: %d\n", mayor);

    return 0;
}