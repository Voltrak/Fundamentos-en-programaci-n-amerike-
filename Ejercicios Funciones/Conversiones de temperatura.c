#include <stdio.h>

int aCelsius(int f) {
    return (int)(5.0 / 9.0 * (f - 32));
}

int aFahrenheit(int c) {
    return (int)(9.0 / 5.0 * c + 32);
}

int main() {
    int i;
    printf("Celsius a Fahrenheit:\n");
    for (i = 0; i <= 100; i++) {
        printf("C:%3d->F:%3d  ", i, aFahrenheit(i));
        if ((i + 1) % 7 == 0) printf("\n");
    }

    printf("\n\nFahrenheit a Celsius:\n");
    for (i = 32; i <= 212; i++) {
        printf("F:%3d->C:%3d  ", i, aCelsius(i));
        if ((i - 31) % 7 == 0) printf("\n");
    }
    printf("\n");
    return 0;
}