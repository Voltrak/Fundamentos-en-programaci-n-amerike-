#include <stdio.h>

int main() {
    int cuenta;
    float saldo_inicial, cargos, abonos, limite, nuevo_saldo;

    while (1) {
        printf("Ingrese numero de cuenta (-1 para terminar): ");
        scanf("%d", &cuenta);
        
        if (cuenta == -1) {
            break;
        }

        printf("Ingrese saldo inicial: ");
        scanf("%f", &saldo_inicial);
        
        printf("Ingrese total de cargos: ");
        scanf("%f", &cargos);
        
        printf("Ingrese total de abonos: ");
        scanf("%f", &abonos);
        
        printf("Ingrese limite de credito: ");
        scanf("%f", &limite);

        nuevo_saldo = saldo_inicial + cargos - abonos;

        if (nuevo_saldo > limite) {
            printf("Cuenta: %d\n", cuenta);
            printf("Limite de credito: %.2f\n", limite);
            printf("Saldo: %.2f\n", nuevo_saldo);
            printf("Limite de credito excedido.\n");
        }
        printf("\n");
    }

    return 0;
}