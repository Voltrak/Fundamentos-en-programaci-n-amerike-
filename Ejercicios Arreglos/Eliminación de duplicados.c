#include <stdio.h>

int main() {
    int numeros[20];
    int ingresados = 0;
    int numero;
    int i, j, duplicado;

    for (i = 0; i < 20; i++) {
        printf("Ingrese un numero (10-100): ");
        scanf("%d", &numero);

        if (numero >= 10 && numero <= 100) {
            duplicado = 0;
            for (j = 0; j < ingresados; j++) {
                if (numeros[j] == numero) {
                    duplicado = 1;
                    break;
                }
            }
            if (!duplicado) {
                numeros[ingresados] = numero;
                ingresados++;
                printf("Nuevo numero unico: %d\n", numero);
            }
        } else {
            printf("Rango invalido. Intente de nuevo.\n");
            i--;
        }
    }

    return 0;
}