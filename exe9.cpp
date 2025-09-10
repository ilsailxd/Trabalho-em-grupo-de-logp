#include<stdio.h>
int primalidade (int numero);

int main () {
 int a, b;
  printf("entre com o numero\n");
  scanf("%i", &a);
    b=primalidade(a);
    if(b==0){
        if(a%2==0){
            printf("O numero eh primo\n");
            printf("O numero %i eh PAR", a);
            
        } 
        else{
            printf("O numero eh primo\n");
            printf("O numero %i eh IMPAR", a);
        }
    }
    else{
        if(a%2==0){
            printf("O numero nao eh primo\n");
            printf("O numero %i eh PAR", a);
        }
         else{
            printf("O numero nao eh primo\n");
            printf("O numero %i eh IMPAR", a);
         }
        }
return 0;
}
int primalidade (int numero) {

    if(numero<=1){
        return 1;
    }
    else if(numero==2){
        return 0;
    }
    else if(numero%2==0) {
        return 1;
    }
    else{
    int i;
    for(i=3;i<numero;++i){
        if(numero%i==0){
            return 1; 
        }
    }
    return 0;
    }

}
