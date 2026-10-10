#include <stdio.h>

int main(void)
{
    int cantidades[5] = {0};
    int producto;
    int cantidad;
    double total = 0.0;

    printf("Ingresa el numero de producto (1-5) y la cantidad vendida.\n");
    printf("Usa el numero de producto 0 para terminar.\n");

    while (1) {
        printf("Producto: ");
        if (scanf("%d", &producto) != 1) {
            printf("Entrada no valida.\n");
            return 1;
        }

        if (producto == 0) {
            break;
        }

        if (producto < 1 || producto > 5) {
            printf("El producto debe estar entre 1 y 5, o ser 0 para terminar.\n");
            return 1;
        }

        printf("Cantidad vendida: ");
        if (scanf("%d", &cantidad) != 1 || cantidad < 0) {
            printf("La cantidad debe ser un entero no negativo.\n");
            return 1;
        }

        cantidades[producto - 1] += cantidad;
    }

    printf("\nProducto\tCantidad\tPrecio\t\tVenta\n");
    for (int numero = 1; numero <= 5; numero++) {
        double precio;

        /* switch determina el precio unitario de cada producto. */
        switch (numero) {
            case 1: precio = 2.98; break;
            case 2: precio = 4.50; break;
            case 3: precio = 9.98; break;
            case 4: precio = 4.49; break;
            case 5: precio = 6.87; break;
            default: return 1;
        }

        double venta = precio * cantidades[numero - 1];
        total += venta;
        printf("%d\t\t%d\t\t$%.2f\t\t$%.2f\n",
               numero, cantidades[numero - 1], precio, venta);
    }

    printf("Valor total de ventas: $%.2f\n", total);
    return 0;
}
