#include <stdio.h>

int main() {
    int horas;
    float tarifa, salario;

    while (1) {
        printf("Ingrese el numero de horas trabajadas (-1 para terminar): ");
        scanf("%d", &horas);
        
        if (horas == -1) {
            break;
        }

        printf("Ingrese la tarifa por hora del trabajador ($00.00): ");
        scanf("%f", &tarifa);

        if (horas <= 40) {
            salario = horas * tarifa;
        } else {
            salario = (40 * tarifa) + ((horas - 40) * (tarifa * 1.5));
        }

        printf("El salario es: $%.2f\n\n", salario);
    }

    return 0;
}