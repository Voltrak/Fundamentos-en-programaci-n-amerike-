#include <stdio.h>

int main(void) {
    unsigned long long numero = 2;

    // El ciclo no termina; al desbordarse el entero sin signo, vuelve a cero.
    while (1) {
        printf("%llu\n", numero);
        numero = numero * 2;
    }

    return 0;
}
