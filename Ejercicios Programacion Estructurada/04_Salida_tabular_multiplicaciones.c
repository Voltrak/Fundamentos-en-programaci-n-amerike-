#include <stdio.h>

int main(void) {
    int n = 1;

    // Imprime los encabezados y las tablas del 1 al 10.
    printf("N\t10*N\t100*N\t1000*N\n");
    while (n <= 10) {
        printf("%d\t%d\t%d\t%d\n", n, 10 * n, 100 * n, 1000 * n);
        n = n + 1;
    }

    return 0;
}
