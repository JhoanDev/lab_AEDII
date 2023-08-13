#include <stdio.h>

int invertenumero(int num, int invertido)
{
    if (num == 0)
        return invertido;
    int resto = num % 10;
    return invertenumero(num / 10, invertido * 10 + resto);
}

int main()
{
    int num, res;
    printf("Insira um numero inteiro para inverter: ");
    scanf("%d", &num);
    res = invertenumero(num, 0);
    printf("\nO seu numero invertido é: %d", res);
}