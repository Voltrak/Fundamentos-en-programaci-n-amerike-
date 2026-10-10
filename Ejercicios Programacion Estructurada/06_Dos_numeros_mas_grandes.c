#include <stdio.h>

int main(void) {
    int numeros[10];
    int contador = 0;
    int anterior;
    int repetido;
    int mayor;
    int segundo;

    // Guarda diez valores distintos; vuelve a pedir los repetidos.
    while (contador < 10) {
        printf("Ingresa el numero %d: ", contador + 1);
        if (scanf("%d", &numeros[contador]) != 1) {
            printf("Entrada invalida: se requiere un entero.\n");
            return 1;
        }

        repetido = 0;
        anterior = 0;
        while (anterior < contador) {
            if (numeros[contador] == numeros[anterior]) {
                repetido = 1;
            } else {
                // Sigue revisando los valores anteriores.
            }
            anterior = anterior + 1;
        }

        if (repetido == 1) {
            printf("Ese numero ya fue ingresado. Intenta con otro.\n");
        } else {
            contador = contador + 1;
        }
    }

    // Ordena conceptualmente los dos valores mas grandes.
    if (numeros[0] > numeros[1]) {
        mayor = numeros[0];
        segundo = numeros[1];
    } else {
        mayor = numeros[1];
        segundo = numeros[0];
    }

    contador = 2;
    while (contador < 10) {
        if (numeros[contador] > mayor) {
            segundo = mayor;
            mayor = numeros[contador];
        } else {
            if (numeros[contador] > segundo) {
                segundo = numeros[contador];
            } else {
                // Los dos valores mayores no cambian.
            }
        }
        contador = contador + 1;
    }

    printf("El mayor es %d y el segundo mayor es %d.\n", mayor, segundo);
    return 0;
}
