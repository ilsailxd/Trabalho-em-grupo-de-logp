#include <stdio.h>

int primalidade(int numero) {
    if (numero <= 1) {
        return 1;
    }
    else if (numero == 2) {
        return 0;
    }
    else if (numero % 2 == 0) {
        return 1;
    }
    else {
        int i;
        for (i = 3; i < numero; ++i) {
            if (numero % i == 0) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (primalidade(n) == 0) {
        printf("%d eh primo\n", n);
    } else {
        printf("%d nao eh primo\n", n);
    }

    return 0;
}
