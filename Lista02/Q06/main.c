#include <stdio.h>

int invertenumero(int num)
{
    int resto, invertido = 0;
    while (num != 0)
    {
        resto = num % 10;
        num = num / 10;
        invertido = invertido * 10 + resto;
    }
    return invertido;
}

int main()
{
    int num, res;
    printf("Insira um numero inteiro para inverter: ");
    scanf("%d", &num);
    res = invertenumero(num);
    printf("\nO seu numero invertido é: %d", res);
}