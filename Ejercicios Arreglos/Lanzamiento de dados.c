#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz_sumas[6][6];
    int frecuencias[13] = {0};
    int i, j, dado1, dado2, suma_obtenida;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz_sumas[i][j] = i + j + 2;
        }
    }

    srand(time(NULL));

    for (i = 0; i < 36000; i++) {
        dado1 = rand() % 6;
        dado2 = rand() % 6;
        
        suma_obtenida = matriz_sumas[dado1][dado2];
        frecuencias[suma_obtenida]++;
    }

    printf("Suma\tFrecuencia\tPorcentaje\n");
    for (i = 2; i <= 12; i++) {
        printf("%d\t%d\t\t%.2f%%\n", i, frecuencias[i], (frecuencias[i] / 36000.0) * 100.0);
    }

    return 0;
}