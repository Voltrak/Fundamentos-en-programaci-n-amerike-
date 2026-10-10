#include <stdio.h>

int main(void)
{
    int numeroCuenta;
    double limiteAnterior;
    double saldo;
    int excedidos = 0;

    for (int cliente = 1; cliente <= 3; cliente++) {
        printf("\nCliente %d\n", cliente);
        printf("Numero de cuenta: ");
        if (scanf("%d", &numeroCuenta) != 1) {
            printf("Entrada no valida.\n");
            return 1;
        }

        printf("Limite de credito anterior: $");
        if (scanf("%lf", &limiteAnterior) != 1 || limiteAnterior < 0.0) {
            printf("El limite debe ser un numero no negativo.\n");
            return 1;
        }

        printf("Saldo actual (cantidad que debe): $");
        if (scanf("%lf", &saldo) != 1 || saldo < 0.0) {
            printf("El saldo debe ser un numero no negativo.\n");
            return 1;
        }

        double nuevoLimite = limiteAnterior / 2.0;
        printf("Cuenta %d - nuevo limite de credito: $%.2f\n",
               numeroCuenta, nuevoLimite);

        if (saldo > nuevoLimite) {
            printf("El saldo excede el nuevo limite de credito.\n");
            excedidos++;
        } else {
            printf("El saldo no excede el nuevo limite de credito.\n");
        }
    }

    if (excedidos == 0) {
        printf("\nNingun cliente excede su nuevo limite.\n");
    }

    return 0;
}
