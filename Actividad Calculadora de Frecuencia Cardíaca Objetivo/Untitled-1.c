#include <stdio.h>

int main() {
    int edad;
    int freq_max;
    float rango_min;
    float rango_max;

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    freq_max = 220 - edad;
    
    rango_min = freq_max * 0.50;
    rango_max = freq_max * 0.85;

    printf("Frecuencia cardiaca maxima estimada: %d lpm\n", freq_max);
    printf("Rango de frecuencia cardiaca objetivo (50%% - 85%%): %.2f lpm - %.2f lpm\n", rango_min, rango_max);

    return 0;
}