#include <stdio.h>

int main(void)
{
    const int valores[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *simbolos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("Numero\tRomano\n");

    for (int numero = 1; numero <= 100; numero++) {
        int restante = numero;
        printf("%d\t", numero);

        for (int indice = 0; indice < 9; indice++) {
            while (restante >= valores[indice]) {
                printf("%s", simbolos[indice]);
                restante -= valores[indice];
            }
        }

        printf("\n");
    }

    return 0;
}
