#include <stdio.h> 

#include <math.h> 

  

// Estrutura 

struct consumo { 

    float consumom; 

    float consumojn; 

    float consumojl; 

    float consumoa; 

}; 

  

typedef struct consumo consumo; 

consumo con[5]; // Global 

  

// Variáveis globais 

float meta; 

int i; 

int dentro = 0, fora = 0; 

  

// Função para calcular a meta 

void calculaMeta() { 

    float media = (con[i].consumom + con[i].consumojn + con[i].consumojl) / 3.0; 

    meta = media * 0.8; 

} 

  

// Função para ler os dados de uma casa 

void lerDados() { 

    printf("Casa %i: \n", i + 1); 

  

    printf("Insira a media de consumo de Maio de 2006: "); 

    scanf("%f", &con[i].consumom); 

  

    printf("Insira a media de consumo de Junho de 2006: "); 

    scanf("%f", &con[i].consumojn); 

  

    printf("Insira a media de consumo de Julho de 2006: "); 

    scanf("%f", &con[i].consumojl); 

  

    printf("Insira o consumo do mes atual: "); 

    scanf("%f", &con[i].consumoa); 

} 

  

// Função para verificar se está dentro da meta 

void verificarMeta() { 

    calculaMeta(); 

  

    if (con[i].consumoa < meta) { 

        printf("Voce esta dentro da meta.\n\n"); 

        dentro++; 

    } else { 

        printf("Voce esta fora da meta.\n\n"); 

        fora++; 

    } 

} 

  

// Função para mostrar o resumo final 

void mostrarResumo() { 

    int total = dentro + fora; 

    if (total > 0) { 

        float porc = (dentro * 100.0) / total; 

        printf("\nResumo:\n"); 

        printf("Casas dentro da meta: %d\n", dentro); 

        printf("Casas fora da meta: %d\n", fora); 

        printf("Porcentagem de casas dentro da meta: %.2f%%\n", porc); 

    } 

} 

  

// Função principal 

int main() { 

    char escolha; 

  

    for (i = 0; i < 5; ++i) { 

        lerDados(); 

        verificarMeta(); 

  

        printf("Deseja continuar? (s/n)\n"); 

        scanf(" %c", &escolha); 

  

        if (escolha == 'n' || escolha == 'N') { 

            break; 

        } 

    } 

  

    mostrarResumo(); 

  

    return 0; 

} 
