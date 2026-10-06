#include <stdio.h>

int main() {
    float galones, millas;
    float total_galones = 0, total_millas = 0;

    while (1) {
        printf("Ingrese los galones usados (-1 para terminar): ");
        scanf("%f", &galones);
        
        if (galones == -1) {
            break;
        }

        printf("Ingrese las millas recorridas: ");
        scanf("%f", &millas);

        printf("Las millas por galon para este tanque fueron: %f\n\n", millas / galones);

        total_galones += galones;
        total_millas += millas;
    }

    if (total_galones > 0) {
        printf("El promedio total de millas por galon fue: %f\n", total_millas / total_galones);
    }

    return 0;
}