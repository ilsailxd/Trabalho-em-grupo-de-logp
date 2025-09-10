#include <stdio.h>

struct tabuada {
    int n;
    int r[11];
};

int main() {
    struct tabuada mt;
    int i;

    printf("Digite um numero para ver a tabuada: ");
    scanf("%i", &mt.n);

    for (i = 0; i <= 10; i++) {
        mt.r[i] = mt.n * i;
    }

    for (i = 0; i <= 10; i++) {
        printf("%i x %i = %i\n", mt.n, i, mt.r[i]);
    }

    return 0;
}
