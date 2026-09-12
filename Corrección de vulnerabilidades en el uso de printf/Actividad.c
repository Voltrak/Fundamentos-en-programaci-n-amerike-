#include <stdio.h>

int main() {
    char nombre[20];
    int edad;
    char mensaje[100];

    printf("Ingresa tu nombre: ");
    scanf("%19s", nombre);

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("Escribe un mensaje: ");
    scanf(" %99[^\n]", mensaje); 

    printf("%s\n", mensaje);

    printf("Hola %s, tienes %d años.\n", nombre, edad);

    return 0;
}