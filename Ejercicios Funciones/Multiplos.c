#include <stdio.h>

int esMultiplo(int a, int b) {
    if (a == 0) return 0;
    return (b % a == 0) ? 1 : 0;
}

int main() {
    int num1, num2;
    printf("Ingrese pares de enteros (-1 -1 para salir):\n");
    while (1) {
        scanf("%d %d", &num1, &num2);
        if (num1 == -1 && num2 == -1) break;
        if (esMultiplo(num1, num2)) {
            printf("%d es multiplo de %d\n", num2, num1);
        } else {
            printf("%d no es multiplo de %d\n", num2, num1);
        }
    }
    return 0;
}