#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
    int dia;
    int mes;
    int ano;
} Data;

int diasdeaula(Data inicio)
{
    Data fim;
    fim.ano = 2023;
    fim.mes = 10;
    fim.dia = 29;
    int diasinicio = 0;
    int diasfim = 0;
    diasinicio += inicio.ano * 365 + inicio.mes * 30 + inicio.dia;
    diasfim += fim.ano * 365 + fim.mes * 30 + fim.dia;
    int semanas = (diasfim - diasinicio) / 7;
    int aulas = semanas * 2;
    return aulas;
}
int main()
{
    Data inicio;
    printf("\nInsira o dia: ");
    scanf("%i", &inicio.dia);
    printf("\nInsira o mes: ");
    scanf("%i", &inicio.mes);
    printf("\nInsira o ano: ");
    scanf("%i", &inicio.ano);
    int qnt = diasdeaula(inicio);
    printf("\nQuantidade de restantes: %d", qnt);
    return 0;
}