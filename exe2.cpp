#include<stdio.h>
int conta (int numerador, int denominador);

int main () {
    int a, b;
    
    printf("Entre com o numerador\n");
    scanf("%i", &a);

    printf("Entre com o denominador\n");
    scanf("%i", &b);
    conta(a, b);

return 0;
}
int conta (int numerador, int denominador){

    int q, cont;
    while (numerador>0){
        cont=numerador-denominador;
        numerador=cont;
        q++;
        if(numerador<=0){
            printf("quociente = %i\nresto = %i", q, numerador*-1);
        }
    }
return 0;
}
