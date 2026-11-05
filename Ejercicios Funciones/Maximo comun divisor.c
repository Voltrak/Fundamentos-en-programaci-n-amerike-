#include <stdio.h>

int mcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Ingrese dos enteros: ");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("Ingrese numeros positivos.\n");
        return 1;
    }
    printf("El MCD de %d y %d es %d\n", num1, num2, mcd(num1, num2));
    return 0;
}