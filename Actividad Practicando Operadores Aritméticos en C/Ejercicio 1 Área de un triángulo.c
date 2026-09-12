#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Ingresa la base del triangulo: ");
    if (scanf("%f", &base) != 1 || base <= 0) {
        printf("Error: Entrada no valida. La base debe ser un numero positivo.\n");
        return 1;
    }

    printf("Ingresa la altura del triangulo: ");
    if (scanf("%f", &altura) != 1 || altura <= 0) {
        printf("Error: Entrada no valida. La altura debe ser un numero positivo.\n");
        return 1;
    }

    area = (base * altura) / 2.0;

    printf("El area del triangulo es: %.2f\n", area);

    return 0;
}