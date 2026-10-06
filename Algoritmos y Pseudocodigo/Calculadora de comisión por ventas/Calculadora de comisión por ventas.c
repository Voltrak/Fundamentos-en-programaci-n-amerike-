#include <stdio.h>

int main() {
    float ventas, salario;

    while (1) {
        printf("Ingrese las ventas en dolares (-1 para terminar): ");
        scanf("%f", &ventas);
        
        if (ventas == -1) {
            break;
        }

        salario = 200.0 + (0.09 * ventas);
        printf("El salario es: $%.2f\n\n", salario);
    }

    return 0;
}