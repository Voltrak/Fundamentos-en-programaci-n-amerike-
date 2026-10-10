#include <stdio.h>

int main(void)
{
    int codigo;

    printf("Calculadora de salario semanal.\n");
    printf("Codigos: 1 gerente, 2 trabajador por hora, 3 comision, 4 por pieza.\n");
    printf("Ingresa 0 como codigo para terminar.\n");

    while (1) {
        double pago = 0.0;

        printf("\nCodigo de pago del empleado: ");
        if (scanf("%d", &codigo) != 1) {
            printf("Entrada no valida.\n");
            return 1;
        }

        if (codigo == 0) {
            break;
        }

        switch (codigo) {
            case 1: {
                double salarioSemanal;
                printf("Salario semanal fijo: $");
                if (scanf("%lf", &salarioSemanal) != 1 || salarioSemanal < 0.0) {
                    printf("El salario debe ser un numero no negativo.\n");
                    return 1;
                }
                pago = salarioSemanal;
                break;
            }
            case 2: {
                double tarifaPorHora;
                double horas;
                printf("Tarifa por hora: $");
                if (scanf("%lf", &tarifaPorHora) != 1 || tarifaPorHora < 0.0) {
                    printf("La tarifa debe ser un numero no negativo.\n");
                    return 1;
                }
                printf("Horas trabajadas: ");
                if (scanf("%lf", &horas) != 1 || horas < 0.0) {
                    printf("Las horas deben ser un numero no negativo.\n");
                    return 1;
                }

                if (horas <= 40.0) {
                    pago = tarifaPorHora * horas;
                } else {
                    pago = tarifaPorHora * 40.0
                         + tarifaPorHora * 1.5 * (horas - 40.0);
                }
                break;
            }
            case 3: {
                double ventasBrutas;
                printf("Ventas brutas de la semana: $");
                if (scanf("%lf", &ventasBrutas) != 1 || ventasBrutas < 0.0) {
                    printf("Las ventas deben ser un numero no negativo.\n");
                    return 1;
                }
                pago = 250.0 + 0.057 * ventasBrutas;
                break;
            }
            case 4: {
                int piezas;
                double pagoPorPieza;
                printf("Cantidad de piezas producidas: ");
                if (scanf("%d", &piezas) != 1 || piezas < 0) {
                    printf("La cantidad debe ser un entero no negativo.\n");
                    return 1;
                }
                printf("Pago por pieza: $");
                if (scanf("%lf", &pagoPorPieza) != 1 || pagoPorPieza < 0.0) {
                    printf("El pago por pieza debe ser no negativo.\n");
                    return 1;
                }
                pago = piezas * pagoPorPieza;
                break;
            }
            default:
                printf("Codigo no valido. Usa un codigo del 1 al 4 o 0 para terminar.\n");
                return 1;
        }

        printf("Pago semanal: $%.2f\n", pago);
    }

    return 0;
}
