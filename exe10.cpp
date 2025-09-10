#include<stdio.h>

int n50(int d, int *p)
{
    int resultado;
    resultado = d/50;
    *p= d % 50;
    return(resultado);
}
int n10(int *p)
{
    int resultado;
    resultado = *p /10;
    *p = *p %10;
    return(resultado);
}
int n5(int *p)
{
    int resultado;
    resultado = *p /5;
    *p = *p %5;
    return(resultado);
}
int n1(int *p)
{
    int resultado;
    resultado = *p /1;
    *p = *p %1;
    return(resultado);
}
int main()
{
    int d, resto;
    int A1, A2, A3, A4;
    printf("entre com o valor que deseja sacar:\n");
    scanf("%d", &d);
    A1 =n50(d, &resto);
    A2 =n10(&resto);
    A3 =n5(&resto);
    A4 =n1(&resto);
    printf("%d %d %d %d", A1, A2, A3, A4);
    return 0;
}
