#include <stdio.h>

int main() {
    const double PI = 3.1416;
    double r, perimetro;

    printf("Ingresa el radio del circulo: ");
    if (scanf("%lf", &r) != 1 || r < 0) {
        printf("Error: Entrada no valida o radio negativo.\n");
        return 1;
    }

    perimetro = 2 * PI * r;
    printf("El perimetro del circulo es: %.4lf\n", perimetro);

    return 0;
}