#include <stdio.h>

int main(void)
{
    long long producto = 1;

    /* Multiplica los numeros impares del 1 al 15. */
    for (int numero = 1; numero <= 15; numero += 2) {
        producto *= numero;
    }

    printf("Producto de los numeros impares del 1 al 15: %lld\n", producto);
    return 0;
}
