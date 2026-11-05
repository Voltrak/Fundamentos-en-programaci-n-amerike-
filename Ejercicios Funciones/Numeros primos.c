#include <stdio.h>
#include <math.h>
#include <time.h>

int esPrimoLimiteMitad(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int esPrimoLimiteRaiz(int n) {
    if (n <= 1) return 0;
    int limite = sqrt(n);
    for (int i = 2; i <= limite; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    clock_t inicio, fin;
    double tiempo1, tiempo2;
    int conteo = 0;

    inicio = clock();
    for (int i = 1; i <= 10000; i++) {
        if (esPrimoLimiteMitad(i)) {
            conteo++;
        }
    }
    fin = clock();
    tiempo1 = (double)(fin - inicio) / CLOCKS_PER_SEC;

    conteo = 0;
    inicio = clock();
    for (int i = 1; i <= 10000; i++) {
        if (esPrimoLimiteRaiz(i)) {
            conteo++;
        }
    }
    fin = clock();
    tiempo2 = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("Primos encontrados: %d\n", conteo);
    printf("Tiempo con limite n/2: %f segundos\n", tiempo1);
    printf("Tiempo con limite raiz(n): %f segundos\n", tiempo2);
    
    if (tiempo2 > 0) {
        printf("Mejora estimada: %f veces mas rapido\n", tiempo1 / tiempo2);
    }

    return 0;
}