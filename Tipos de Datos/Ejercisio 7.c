#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Ingresa tres numeros enteros diferentes separados por espacios: ");
    
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Error: Entrada no valida.\n");
        return 1;
    }

    if (a == b) {
        printf("Error: Los numeros deben ser diferentes.\n");
        return 1;
    }
    if (a == c) {
        printf("Error: Los numeros deben ser diferentes.\n");
        return 1;
    }
    if (b == c) {
        printf("Error: Los numeros deben ser diferentes.\n");
        return 1;
    }

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Orden ascendente: %d %d %d\n", a, b, c);

    return 0;
}