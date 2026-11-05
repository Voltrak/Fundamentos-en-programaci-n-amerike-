#include <stdio.h>
#include <math.h>

double calcularCargos(double horas) {
    double cargo = 2.0;
    if (horas > 3.0) {
        cargo += ceil(horas - 3.0) * 0.5;
    }
    if (cargo > 10.0) {
        cargo = 10.0;
    }
    return cargo;
}

int main() {
    double h1, h2, h3;
    double c1, c2, c3;
    double totalH, totalC;

    do {
        printf("Horas cliente 1: ");
        scanf("%lf", &h1);
    } while (h1 <= 0 || h1 > 24);

    do {
        printf("Horas cliente 2: ");
        scanf("%lf", &h2);
    } while (h2 <= 0 || h2 > 24);

    do {
        printf("Horas cliente 3: ");
        scanf("%lf", &h3);
    } while (h3 <= 0 || h3 > 24);

    c1 = calcularCargos(h1);
    c2 = calcularCargos(h2);
    c3 = calcularCargos(h3);

    totalH = h1 + h2 + h3;
    totalC = c1 + c2 + c3;

    printf("Car\tHours\tCharge\n");
    printf("1\t%.1f\t%.2f\n", h1, c1);
    printf("2\t%.1f\t%.2f\n", h2, c2);
    printf("3\t%.1f\t%.2f\n", h3, c3);
    printf("TOTAL\t%.1f\t%.2f\n", totalH, totalC);

    return 0;
}