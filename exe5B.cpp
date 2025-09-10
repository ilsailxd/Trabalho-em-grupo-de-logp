#include <stdio.h>

double funcao(int res) {
    double x[20], z[20], s, n;
    s = 0;
    n = 1;
    x[0] = 13;
    z[0] = 1 / x[0];

    for (int i = 1; i < res; i++) {
        x[i] = x[i - 1] + 20;
        z[i] = 1 / x[i];
    }

    for (int i = 0; i < res; i++) {
        s = s + n * z[i];
        n = n + 1;
    }
    return s;
}

int main() {
    int res = 20;
    double soma = funcao(res);
    printf("%10lf", soma);
    return 0;
}
