#include <stdio.h>

int main(void) {
    double poblacion;
    double tasaPorcentaje;
    double poblacionInicial;
    double incremento;
    int añio = 1;
    int añioDoble = 0;
    int añioCuadruple = 0;

    // Ingresa estimaciones actuales obtenidas de fuentes de investigacion.
    printf("Ingresa la poblacion mundial actual estimada (personas): ");
    if (scanf("%lf", &poblacion) != 1 || poblacion <= 0.0) {
        printf("Entrada invalida: la poblacion debe ser mayor que cero.\n");
        return 1;
    }
    printf("Ingresa la tasa anual de crecimiento (porcentaje, por ejemplo 0.8): ");
    if (scanf("%lf", &tasaPorcentaje) != 1 || tasaPorcentaje < 0.0) {
        printf("Entrada invalida: la tasa no puede ser negativa.\n");
        return 1;
    }

    poblacionInicial = poblacion;
    printf("Anio\tPoblacion al final\tIncremento anual\n");

    // Proyecta 100 años suponiendo constante la tasa anual indicada.
    while (añio <= 100) {
        incremento = poblacion * (tasaPorcentaje / 100.0);
        poblacion = poblacion + incremento;
        printf("%d\t%.0f\t\t%.0f\n", añio, poblacion, incremento);

        if (añioDoble == 0 && poblacion >= poblacionInicial * 2.0) {
            añioDoble = añio;
        } else {
            // Aun no se registra el primer cruce del doble.
        }
        if (añioCuadruple == 0 && poblacion >= poblacionInicial * 4.0) {
            añioCuadruple = añio;
        } else {
            // Aun no se registra el primer cruce del cuadruple.
        }
        añio = añio + 1;
    }

    if (añioDoble > 0) {
        printf("La poblacion se duplica por primera vez en el año %d.\n", añioDoble);
    } else {
        printf("No se duplica durante los 100 años proyectados.\n");
    }
    if (añioCuadruple > 0) {
        printf("La poblacion se cuadruplica por primera vez en el año %d.\n", añioCuadruple);
    } else {
        printf("No se cuadruplica durante los 100 años proyectados.\n");
    }

    return 0;
}
