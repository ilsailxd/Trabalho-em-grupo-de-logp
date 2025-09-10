#include <stdio.h>

int calculo(int fim) {
    int i, x, S;
    x = 0;
    S = 0;
    for (i = 38; i >= fim; i--) {
        x++;
        S += ((i - 1) * i) / x;
    }
    return S;
}

int main() {
    int fim = 2;
    int resultado = calculo(fim);
    printf("O valor de S eh: %d", resultado);
    return 0;
}
