#include <stdio.h>

int main(void)
{
    long long factorial = 1;

    printf("Numero\tFactorial\n");
    for (int numero = 1; numero <= 5; numero++) {
        factorial *= numero;
        printf("%d\t%lld\n", numero, factorial);
    }

    return 0;
}
