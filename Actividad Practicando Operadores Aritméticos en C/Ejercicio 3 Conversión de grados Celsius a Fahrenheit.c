#include <stdio.h>

int main() {
    float c, f;

    printf("Ingresa la temperatura en grados Celsius: ");
    if (scanf("%f", &c) != 1) {
        printf("Error: Entrada no valida.\n");
        return 1;
    }

    f = (9.0 / 5.0) * c + 32.0;
    printf("La temperatura en Fahrenheit es: %.2f\n", f);

    return 0;
}