#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingresa el primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("%d es igual a %d\n", num1, num2);
    }

    if (num1 != num2) {
        printf("%d no es igual a %d\n", num1, num2);
    }

    if (num1 < num2) {
        printf("%d es menor que %d\n", num1, num2);
    }

    if (num1 > num2) {
        printf("%d es mayor que %d\n", num1, num2);
    }

    if (num1 <= num2) {
        printf("%d es menor o igual a %d\n", num1, num2);
    }

    if (num1 >= num2) {
        printf("%d es mayor o igual a %d\n", num1, num2);
    }

    return 0;
}