#include <stdio.h>

int main(void)
{
    int x, y, a, b, g, i, j;

    printf("Ingresa siete enteros (x y a b g i j): ");
    if (scanf("%d %d %d %d %d %d %d", &x, &y, &a, &b, &g, &i, &j) != 7) {
        printf("Entrada no valida.\n");
        return 1;
    }

    /* Cada expresion transformada aplica una de las leyes de De Morgan. */
    int originalA = (!(x < 5) && !(y >= 7));
    int equivalenteA = (x >= 5) && (y < 7);

    int originalB = (!(a == b) || !(g != 5));
    int equivalenteB = (a != b) || (g == 5);

    int originalC = !((x <= 8) && (y > 4));
    int equivalenteC = (x > 8) || (y <= 4);

    int originalD = !((i > 4) || (j <= 6));
    int equivalenteD = (i <= 4) && (j > 6);

    printf("\nCaso\tOriginal\tEquivalente\tCoinciden\n");
    printf("A\t%d\t\t%d\t\t%s\n", originalA, equivalenteA,
           originalA == equivalenteA ? "Si" : "No");
    printf("B\t%d\t\t%d\t\t%s\n", originalB, equivalenteB,
           originalB == equivalenteB ? "Si" : "No");
    printf("C\t%d\t\t%d\t\t%s\n", originalC, equivalenteC,
           originalC == equivalenteC ? "Si" : "No");
    printf("D\t%d\t\t%d\t\t%s\n", originalD, equivalenteD,
           originalD == equivalenteD ? "Si" : "No");

    return 0;
}
