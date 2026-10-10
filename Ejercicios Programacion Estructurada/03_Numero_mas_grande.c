#include <stdio.h>
//Pseudocódigo:
/*Inicializar counter a 1
Inicializar largest a -1
Mientras counter <= 10:
    Imprimir "Ingresa un número no negativo: "
    Leer number
    Mientras number < 0:
        Imprimir "Error. Ingresa un número no negativo: "
        Leer number
    Si number > largest:
        largest = number
    counter = counter + 1
Imprimir "El número más grande es: " + largest*/

int main(void) {
    int contador = 1;
    int numero;
    int largest;

    printf("Ingresa 10 numeros no negativos.\n");
    printf("Numero 1: ");
    if (scanf("%d", &numero) != 1 || numero < 0) {
        printf("Entrada invalida.\n");
        return 1;
    }
    largest = numero;

    // Compara cada numero nuevo con el maximo encontrado hasta ahora.
    while (contador < 10) {
        contador = contador + 1;
        printf("Numero %d: ", contador);
        if (scanf("%d", &numero) != 1 || numero < 0) {
            printf("Entrada invalida: se requiere un entero no negativo.\n");
            return 1;
        }
        if (numero > largest) {
            largest = numero;
        } else {
            // El maximo actual no cambia.
        }
    }

    printf("El numero mas grande es %d.\n", largest);
    return 0;
}
