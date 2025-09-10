#include <stdio.h>

struct Cliente {
    int idade;
    char genero;
    char utilizacao;
    char garagem;
};

int calcP(struct Cliente cliente) {
    int p = 0;

    if (cliente.idade < 18) {
        printf("Abaixo de 18 anos nao ha cobertura.\n");
        return -1;
    }
    else if (cliente.idade >= 18 && cliente.idade <= 23) {
        p += 4;
    }
    else if (cliente.idade >= 24 && cliente.idade <= 29) {
        p += 3;
    }
    else if (cliente.idade >= 30 && cliente.idade <= 45) {
        p += 2;
    }
    else if (cliente.idade >= 46) {
        p += 1;
    }

    if (cliente.genero == 'F' || cliente.genero == 'f') {
        p += 2;
    }
    else if (cliente.genero == 'M' || cliente.genero == 'm') {
        p += 3;
    }

    if (cliente.utilizacao == 'P' || cliente.utilizacao == 'p') {
        p += 1;
    }
    else if (cliente.utilizacao == 'T' || cliente.utilizacao == 't') {
        p += 2;
    }
    else if (cliente.utilizacao == 'A' || cliente.utilizacao == 'a') {
        p += 3;
    }

    if (cliente.garagem == 'S' || cliente.garagem == 's') {
        p += 6;
    }
    else if (cliente.garagem == 'D' || cliente.garagem == 'd') {
        p += 4;
    }
    else if (cliente.garagem == 'N' || cliente.garagem == 'n') {
        p += 2;
    }
    else if (cliente.garagem == 'A' || cliente.garagem == 'a') {
        p += 1;
    }

    return p;
}

void classiR(int p) {
    if (p == -1) {
        return;
    }

    printf("Total de pontos acumulados: %d\n", p);

    if (p <= 7) {
        printf("Classificacao: Baixo risco (Desconto de 10%%)\n");
    }
    else if (p >= 8 && p <= 10) {
        printf("Classificacao: Medio risco (Nenhuma mudanca)\n");
    }
    else if (p >= 11 && p <= 14) {
        printf("Classificacao: Alto risco (Acrescimo de 10%%)\n");
    }
    else if (p >= 15 && p <= 16) {
        printf("Classificacao: Altissimo risco (Acrescimo de 40%%)\n");
    }
    else {
        printf("Classificacao: Indefinida\n");
    }
}

int main() {
    struct Cliente cliente1;

    printf("Digite sua idade: ");
    scanf("%d", &cliente1.idade);

    printf("Digite seu genero (M/F): ");
    scanf(" %c", &cliente1.genero);

    printf("Digite sua utilizacao (P-Passeio, T-Trabalho, A-Ambos): ");
    scanf(" %c", &cliente1.utilizacao);

    printf("Digite o seu tipo de garagem (S-Sem garagem, D-Diurna, N-Noturna, A-Ambas): ");
    scanf(" %c", &cliente1.garagem);

    int total_p = calcP(cliente1);
    classiR(total_p);

    return 0;
}
