#include <stdio.h> #include <string.h> #include <stdlib.h> 

#define MAX_PESSOAS 5 

typedef struct { char nome[50]; char endereco[100]; char email[50]; char telefone[15]; 

} Pessoa; void cadastrar(Pessoa agenda[], int *contador); void pesquisar(Pessoa agenda[], int contador); void classificar(Pessoa agenda[], int contador); void alterar(Pessoa agenda[], int contador); void remover(Pessoa agenda[], int *contador); 

int main() { Pessoa agenda[MAX_PESSOAS]; int contador = 0; int opcao; do { printf("\n--- MENU ---\n"); printf("1. Cadastrar pessoa\n"); printf("2. Pesquisar pessoa\n"); printf("3. Classificar por nome\n"); printf("4. Alterar cadastro\n"); printf("5. Remover cadastro\n"); printf("6. Sair\n"); printf("Escolha uma opção: "); scanf("%d", &opcao); getchar(); 

 switch (opcao) { case 1: cadastrar(agenda, &contador); break; case 2: pesquisar(agenda, contador); break; case 3: classificar(agenda, contador); break; case 4: alterar(agenda, contador); break; case 5: remover(agenda, &contador); break; case 6: printf("Saindo...\n"); break; default: printf("Opção inválida! Tente novamente.\n"); } } while (opcao != 6); return 0; } 

void cadastrar(Pessoa agenda[], int *contador) { 

if (*contador < MAX_PESSOAS) { 
 
    printf("\n--- Cadastro de Pessoa ---\n"); 
 
    printf("Nome: "); 
  

fgets(agenda[*contador].nome, sizeof(agenda[*contador].nom), stdin); agenda[*contador].nome[strcspn(agenda[*contador].nome, "\n")] = 0; printf("Endereço: "); fgets(agenda[*contador].endereco, sizeof(agenda[*contador].endereco), stdin); 

   agenda[*contador].endereco[strcspn(agenda[*contador].endereco, "\n")] = 0; 
 
    printf("E-mail: "); 
 
    fgets(agenda[*contador].email, sizeof(agenda[*contador].email), stdin); 
 
    agenda[*contador].email[strcspn(agenda[*contador].email, "\n")] = 0; 
    printf("Telefone: "); 
  fgets(agenda[*contador].telefone, sizeof(agenda[*contador].telefone), stdin);      agenda[*contador].telefone[strcspn(agenda[*contador].telefone, "\n")] = 0; 
    (*contador)++; 
} else { 
    printf("Agenda cheia!\n"); 
} 
  

} void pesquisar(Pessoa agenda], int contador) char nomePesquisado[50]; int encontrado = 0; printf("\nDigite o nome para pesquisa: "); fgets(nomePesquisado, sizeof(nomePesquisado), stdin); nomePesquisado[strcspn(nomePesquisado, "\n")] = 0; 

 for (int i = 0; i < contador; i++) { if (strcmp(agenda[i].nome, nomePesquisado) == 0) { printf("\n--- Dados encontrados ---\n"); printf("Nome: %s\n", agenda[i].nome); printf("Endereço: %s\n", agenda[i].endereco); printf("E-mail: %s\n", agenda[i].email); printf("Telefone: %s\n", agenda[i].telefone); encontrado = 1; break; } } if (!encontrado) { printf("Pessoa não encontrada!\n"); } } void classificar(Pessoa agenda[], int contador) { Pessoa temp; for (int i = 0; i < contador - 1; i++) { for (int j = i + 1; j < contador; j++) { if (strcmp(agenda[i].nome, agenda[j].nome) > 0) { temp = agenda[i]; agenda[i] = agenda[j]; agenda[j] = temp; } } } printf("\nAgenda classificada por nome!\n"); } void alterar(Pessoa agenda[], int contador) { char nomeAlterado[50]; int encontrado = 0; printf("\nDigite o nome para alterar: "); fgets(nomeAlterado, sizeof(nomeAlterado), stdin); nomeAlterado[strcspn(nomeAlterado, "\n")] = 0; for (int i = 0; i < contador; i++) { if (strcmp(agenda[i].nome, nomeAlterado) == 0) { printf("Digite as novas informações:\n"); 

       printf("Nome: "); 
        fgets(agenda[i].nome, sizeof(agenda[i].nome), stdin);        agenda[i].nome[strcspn(agenda[i].nome, "\n")] = 0; 
        printf("Endereço: "); 
        fgets(agenda[i].endereco, sizeof(agenda[i].endereco), stdin);      agenda[i].endereco[strcspn(agenda[i].endereco, "\n")] = 0; 
        printf("E-mail: "); 
        fgets(agenda[i].email, sizeof(agenda[i].email), stdin); 
 agenda[i].email[strcspn(agenda[i].email, "\n")] = 0; 
        printf("Telefone: "); 
        fgets(agenda[i].telefone, sizeof(agenda[i].telefone), stdin); agenda[i].telefone[strcspn(agenda[i].telefone, "\n")] = 0; 
        encontrado = 1; 
       break; 
    } 
} 
if (!encontrado) { 
    printf("Pessoa não encontrada!\n"); 
  

} } void remover(Pessoa agenda[], int *contador) { 

char nomeRemover[50]; 
int encontrado = 0; 
printf("\nDigite o nome para remover: "); 
fgets(nomeRemover, sizeof(nomeRemover), stdin); nomeRemover[strcspn(nomeRemover, "\n")] = 0; 
for (int i = 0; i < *contador; i++) { 
    if (strcmp(agenda[i].nome, nomeRemover) == 0) { 
        for (int j = i; j < *contador - 1; j++) { 
            agenda[j] = agenda[j + 1];   
        } 
        (*contador)--; 
        encontrado = 1; 
        break; 
    } 
} 
if (!encontrado) { 
    printf("Pessoa não encontrada!\n"); 
} 
  

} 
