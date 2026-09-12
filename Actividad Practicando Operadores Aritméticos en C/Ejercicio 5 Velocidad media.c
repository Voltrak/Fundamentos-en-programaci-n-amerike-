#include <stdio.h>

int main() {
    float d, t, v;

    printf("Ingresa la distancia recorrida en kilometros: ");
    if (scanf("%f", &d) != 1 || d < 0) return 1;

    printf("Ingresa el tiempo empleado en horas: ");
    if (scanf("%f", &t) != 1) return 1;

    if (t == 0) {
        printf("Error: El tiempo no puede ser cero.\n");
        return 1;
    }

    v = d / t;
    printf("La velocidad media es: %.2f km/h\n", v);

    return 0;
}