#include <stdio.h>

int binario(int x) {
    int bits[64];
    int i = 0, j;

    do {
        bits[i] = x % 2;
        x = x / 2;
        i++;
    } while (x > 0);

    printf("O numero em binario eh: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
    printf("\n");

    return 0;
}

int main() {
    int numero;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    binario(numero);
    return 0;
}
