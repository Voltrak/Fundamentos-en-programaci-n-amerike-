#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroAdivinar, intento;

    srand(time(NULL));
    numeroAdivinar = (rand() % 1000) + 1;

    printf("El jugador escribe una primera suposicion: ");
    
    while (1) {
        if (scanf("%d", &intento) != 1) {
            while (getchar() != '\n');
            continue;
        }

        if (intento < 1 || intento > 1000) {
            printf("Rango invalido.\n");
            continue;
        }

        if (intento == numeroAdivinar) {
            printf("Excelente! Adivinaste el numero!\n");
            break;
        } else if (intento < numeroAdivinar) {
            printf("Demasiado bajo.\n");
        } else {
            printf("Demasiado alto.\n");
        }
    }

    return 0;
}