#include <stdio.h>

int main() {
    float precio, subtotal, iva, total;
    int cantidad;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);

    subtotal = precio * cantidad;
    iva = subtotal * 0.16;
    total = subtotal + iva;

    printf("Subtotal: %.2f\n", subtotal);
    printf("IVA: %.2f\n", iva);
    printf("Total a pagar: %.2f\n", total);

    return 0;
}