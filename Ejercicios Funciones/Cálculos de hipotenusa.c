#include <stdio.h>
#include <math.h>

double hipotenusa(double lado1, double lado2) {
    return sqrt(pow(lado1, 2) + pow(lado2, 2));
}

int main() {
    printf("Lado 1\tLado 2\tHipotenusa\n");
    printf("%.1f\t%.1f\t%.1f\n", 3.0, 4.0, hipotenusa(3.0, 4.0));
    printf("%.1f\t%.1f\t%.1f\n", 5.0, 12.0, hipotenusa(5.0, 12.0));
    printf("%.1f\t%.1f\t%.1f\n", 8.0, 15.0, hipotenusa(8.0, 15.0));
    return 0;
}