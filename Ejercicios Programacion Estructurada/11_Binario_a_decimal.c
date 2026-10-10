#include <stdio.h>

int main(void) {
    long long binario;
    long long temporal;
    int digito;
    int cantidadDigitos = 0;
    int posicion = 1;
    int decimal = 0;

    printf("Ingresa un numero binario de hasta 5 digitos: ");
    if (scanf("%lld", &binario) != 1 || binario < 0 || binario > 11111) {
        printf("Entrada invalida.\n");
        return 1;
    }

    temporal = binario;
    if (temporal == 0) {
        cantidadDigitos = 1;
    }

    // Verifica que el numero contenga exclusivamente ceros y unos.
    while (temporal > 0) {
        digito = (int)(temporal % 10);
        if (digito != 0 && digito != 1) {
            printf("Entrada invalida: usa solamente 0 y 1.\n");
            return 1;
        } else {
            cantidadDigitos = cantidadDigitos + 1;
        }
        temporal = temporal / 10;
    }

    if (cantidadDigitos > 5) {
        printf("Entrada invalida: se permiten hasta 5 digitos.\n");
        return 1;
    }

    // Convierte cada digito binario con su valor posicional.
    temporal = binario;
    while (temporal > 0) {
        digito = (int)(temporal % 10);
        decimal = decimal + digito * posicion;
        posicion = posicion * 2;
        temporal = temporal / 10;
    }

    printf("El equivalente decimal de %lld es %d.\n", binario, decimal);
    return 0;
}
