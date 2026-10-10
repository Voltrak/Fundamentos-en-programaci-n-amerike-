#include <stdio.h>

int main(void) {
    int passes = 0;
    int failures = 0;
    int student = 1;
    int result;

    // Procesa a 10 estudiantes y valida que cada resultado sea 1 o 2.
    while (student <= 10) {
        printf("Resultado del estudiante %d (1=aprobado, 2=reprobado): ", student);
        if (scanf("%d", &result) != 1) {
            printf("Entrada invalida: se requiere el numero 1 o 2.\n");
            return 1;
        }

        while (result != 1 && result != 2) {
            printf("Valor incorrecto. Ingresa 1 o 2: ");
            if (scanf("%d", &result) != 1) {
                printf("Entrada invalida: se requiere el numero 1 o 2.\n");
                return 1;
            }
        }

        if (result == 1) {
            passes = passes + 1;
        } else {
            failures = failures + 1;
        }
        student = student + 1;
    }

    printf("Aprobados: %d\nReprobados: %d\n", passes, failures);
    if (passes > 8) {
        printf("Felicitaciones al instructor.\n");
    } else {
        // No se cumple la condicion del mensaje adicional.
    }

    return 0;
}
