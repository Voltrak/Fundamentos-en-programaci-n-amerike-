#include <stdio.h>

int esPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

int main() {
    int num;
    printf("Ingrese enteros (-1 para salir):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) break;
        if (esPar(num)) {
            printf("%d es par\n", num);
        } else {
            printf("%d es impar\n", num);
        }
    }
    return 0;
}