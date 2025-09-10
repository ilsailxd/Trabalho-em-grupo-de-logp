#include <stdio.h>

void conta(int numerador, int denominador);

int main() {
    int a, b;

    printf("Entre com o numerador:\n");
    scanf("%i", &a);

    printf("Entre com o denominador:\n");
    scanf("%i", &b);

    conta(a, b);

    return 0;
}

void conta(int numerador, int denominador) {
    int q = 0, cont;

    while (numerador >= denominador) {
        cont = numerador - denominador;
        numerador = cont;
        q++;
    }

    if (numerador >= 0) {
        printf("Quociente = %i\nResto = %i\n", q, numerador);
    }
}
