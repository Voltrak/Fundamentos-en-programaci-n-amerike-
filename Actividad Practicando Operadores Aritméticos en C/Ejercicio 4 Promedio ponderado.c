#include <stdio.h>

int main() {
    float n1, n2, n3;
    float p1, p2, p3;
    float suma_pesos, promedio;

    printf("Ingresa la calificacion 1 y su peso (separados por espacio): ");
    if (scanf("%f %f", &n1, &p1) != 2) return 1;

    printf("Ingresa la calificacion 2 y su peso (separados por espacio): ");
    if (scanf("%f %f", &n2, &p2) != 2) return 1;

    printf("Ingresa la calificacion 3 y su peso (separados por espacio): ");
    if (scanf("%f %f", &n3, &p3) != 2) return 1;

    suma_pesos = p1 + p2 + p3;

    if (suma_pesos == 0) {
        printf("Error: La suma de los pesos no puede ser cero (division entre cero).\n");
        return 1;
    }

    promedio = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / suma_pesos;
    printf("El promedio ponderado es: %.2f\n", promedio);

    return 0;
}