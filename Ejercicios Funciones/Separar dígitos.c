#include <stdio.h>

int cociente(int a, int b) {
    return a / b;
}

int residuo(int a, int b) {
    return a % b;
}

void imprimirDigitos(int n) {
    int divisor = 10000;
    int digito;
    int empezo = 0;

    if (n < 1 || n > 32767) {
        printf("Numero fuera de rango.\n");
        return;
    }

    while (divisor >= 1) {
        digito = cociente(n, divisor);
        if (digito != 0 || empezo || divisor == 1) {
            printf("%d  ", digito);
            empezo = 1;
        }
        n = residuo(n, divisor);
        divisor = cociente(divisor, 10);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Ingrese un entero entre 1 y 32767: ");
    scanf("%d", &numero);
    imprimirDigitos(numero);
    return 0;
}