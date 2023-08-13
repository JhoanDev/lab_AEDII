#include <stdio.h>

void perfeito(int num)
{
    int i;
    if (num > 1)
    {
        int fatores[num];
        int soma = 0;
        int cont = 0;
        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                fatores[cont] = i;
                soma += i;
                cont++;
            }
        }
        if (soma == num)
        {
            printf("Soma dos fatores de %d: 1", num);
            for (i = 1; i < cont; i++)
            {
                printf(" + %d", fatores[i]);
            }
            printf(" = %d\nportanto o numero %d e perfeito.\n\n", soma, num);
        }
    }
}

int main()
{
    int i;
    for (i = 1; i < 1000; i++)
    {
        perfeito(i);
    }

    return 0;
}