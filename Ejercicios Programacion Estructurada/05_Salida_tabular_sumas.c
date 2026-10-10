#include <stdio.h>

int main(void) {
    int a = 3;

    // Cada fila comienza en A y muestra A, A+2, A+4 y A+6.
    printf("A\tA+2\tA+4\tA+6\n");
    while (a <= 15) {
        printf("%d\t%d\t%d\t%d\n", a, a + 2, a + 4, a + 6);
        a = a + 3;
    }

    return 0;
}
