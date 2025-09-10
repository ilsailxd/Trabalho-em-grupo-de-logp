#include<stdio.h> 

#include<string.h> 

struct pessoa{ 

    char nome[100]; 

} aluno[40]; 

int i, j; 

char x[100]; 

void nome() 

{ 

    for(i=0;i<40;i++){ 

        scanf("%s", &aluno[i].nome); 

    } 

} 

void crescente() 

{ 

    for(i=0;i<39;i++){ 

        for(j=i+1;j<40;j++){ 

            if((strcmp(aluno[i].nome, aluno[j].nome))>0){ 

                strcpy(x,aluno[i].nome); 

                strcpy(aluno[i].nome,aluno[j].nome); 

                strcpy(aluno[j].nome,x); 

            } 

        } 

    } 

    printf("ordem crescente dos nomes:\n"); 

    for(i=0;i<40;i++){ 

        printf("%s\n", aluno[i].nome); 

    } 

} 

void pesquisa() 

{ 

    printf("entre com o nome que deseja pesquisar:\n"); 

    char pesquisa[50]; 

    scanf("%s", &pesquisa); 

    for(i=0;i<40;i++){ 

        if(strcmp(pesquisa, aluno[i].nome)==0){ 

            break; 

        } 

    } 

    printf("\no nome %s esta na posicao %d", aluno[i].nome, i+1); 

} 

int main() 

{ 

    printf("entre com o nome de 40 alunos:"); 

    nome(); 

    crescente(); 

    pesquisa(); 

    return 0; 

} 
