#include <stdio.h>

int main() {
    int contadores[9] = {0};
    double ventas_brutas;
    int salario;
    int indice;

    printf("Ingrese las ventas brutas del vendedor (-1 para terminar): ");
    scanf("%lf", &ventas_brutas);

    while (ventas_brutas != -1) {

        salario = (int)(200.0 + 0.09 * ventas_brutas);

        indice = (salario - 200) / 100;

        if (indice > 8) {
            indice = 8;
        } else if (indice < 0) {
            indice = 0; 
        }

        contadores[indice]++;

        printf("Ingrese las ventas brutas del siguiente vendedor (-1 para terminar): ");
        scanf("%lf", &ventas_brutas);
    }

    printf("\nCantidad de vendedores en cada rango de salario:\n");
    printf("a) $200 - $299: %d\n", contadores[0]);
    printf("b) $300 - $399: %d\n", contadores[1]);
    printf("c) $400 - $499: %d\n", contadores[2]);
    printf("d) $500 - $599: %d\n", contadores[3]);
    printf("e) $600 - $699: %d\n", contadores[4]);
    printf("f) $700 - $799: %d\n", contadores[5]);
    printf("g) $800 - $899: %d\n", contadores[6]);
    printf("h) $900 - $999: %d\n", contadores[7]);
    printf("i) $1000 y mas: %d\n", contadores[8]);

    return 0;
}