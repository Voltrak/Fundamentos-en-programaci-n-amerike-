#include <stdio.h>

int main() {
    char caracteres[] = {'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' '};
    
    int cantidad = sizeof(caracteres) / sizeof(caracteres[0]);

    printf("Caracter | Valor ASCII\n");
    printf("---------|------------\n");

    for (int i = 0; i < cantidad; i++) {
        printf("   '%c'   |     %d\n", caracteres[i], caracteres[i]);
    }

    return 0;
}