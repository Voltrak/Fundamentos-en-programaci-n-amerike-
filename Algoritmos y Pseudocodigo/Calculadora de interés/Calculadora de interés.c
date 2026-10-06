#include <stdio.h>

int main() {
    float capital, tasa, interes;
    int dias;

    while (1) {
        printf("Ingrese el capital del prestamo (-1 para terminar): ");
        scanf("%f", &capital);
        
        if (capital == -1) {
            break;
        }

        printf("Ingrese la tasa de interes: ");
        scanf("%f", &tasa);
        
        printf("Ingrese el plazo del prestamo en dias: ");
        scanf("%d", &dias);

        interes = (capital * tasa * dias) / 365.0;
        
        printf("El cargo por interes es: $%.2f\n\n", interes);
    }

    return 0;
}