#include <stdio.h>

int main(void) {
    double radio;
    double diametro;
    double circunferencia;
    double area;
    const double pi = 3.14159;

    printf("Ingresa el radio del circulo: ");
    if (scanf("%lf", &radio) != 1 || radio < 0.0) {
        printf("Entrada invalida: el radio debe ser un valor no negativo.\n");
        return 1;
    }

    diametro = 2.0 * radio;
    circunferencia = 2.0 * pi * radio;
    area = pi * radio * radio;

    printf("Diametro: %.5f\n", diametro);
    printf("Circunferencia: %.5f\n", circunferencia);
    printf("Area: %.5f\n", area);
    return 0;
}
