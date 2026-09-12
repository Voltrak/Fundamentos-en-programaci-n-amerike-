#include <stdio.h>

int main() {
    char nombre[31];
    unsigned short edad;
    unsigned short nivel;
    float experiencia;
    char clase;

    printf("  _____  _____   _____    ____  _    _ ______  _____ _______ \n");
    printf(" |  __ \\|  __ \\ / ____|  / __ \\| |  | |  ____|/ ____|__   __|\n");
    printf(" | |__) | |__) | |  __  | |  | | |  | | |__  | (___    | |   \n");
    printf(" |  _  /|  ___/| | |_ | | |  | | |  | |  __|  \\___ \\   | |   \n");
    printf(" | | \\ \\| |    | |__| | | |__| | |__| | |____ ____) |  | |   \n");
    printf(" |_|  \\_\\_|     \\_____|  \\____/ \\____/|______|_____/   |_|   \n");
    printf("===============================================================\n\n");

    printf("Ingresa el nombre del jugador: ");
    scanf(" %30[^\n]", nombre);

    printf("Ingresa la edad: ");
    scanf("%hu", &edad);

    printf("Ingresa el nivel inicial (1-10): ");
    scanf("%hu", &nivel);

    printf("Ingresa los puntos de experiencia: ");
    scanf("%f", &experiencia);

    printf("\nClases disponibles:\n");
    printf("A) Guerrero\n");
    printf("B) Mago\n");
    printf("C) Arquero\n");
    printf("D) Asesino\n");
    printf("Selecciona la clase de tu personaje: ");
    scanf(" %c", &clase);

    printf("\n--- Resumen del Jugador ---\n");
    printf("Nombre: %s\n", nombre);
    printf("Edad: %hu\n", edad);
    printf("Nivel: %hu\n", nivel);
    printf("Experiencia: %.2f\n", experiencia);
    
    printf("Clase: ");
    if (clase == 'A' || clase == 'a') {
        printf("Guerrero\n");
    } else if (clase == 'B' || clase == 'b') {
        printf("Mago\n");
    } else if (clase == 'C' || clase == 'c') {
        printf("Arquero\n");
    } else if (clase == 'D' || clase == 'd') {
        printf("Asesino\n");
    } else {
        printf("Desconocida\n");
    }

    return 0;
}