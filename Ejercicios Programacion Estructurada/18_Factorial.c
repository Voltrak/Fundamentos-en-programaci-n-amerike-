#include <stdio.h>

int main(void) {
    int n;
    int contador = 1;
    unsigned long long factorial = 1;

    printf("Ingresa un entero entre 0 y 20: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Entrada invalida: ingresa un entero entre 0 y 20.\n");
        return 1;
    }

    // El factorial de cero es uno; para los demas multiplica hasta n.
    while (contador <= n) {
        factorial = factorial * (unsigned long long)contador;
        contador = contador + 1;
    }

    printf("%d! = %llu\n", n, factorial);
    return 0;
}
