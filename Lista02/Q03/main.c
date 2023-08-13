#include <stdio.h>

int triangulos(int entrada)
{
    int a, b, c, quantidade = 0;
    for (a = 1; a <= entrada; a++)
    {
        for (b = 1; b <= entrada; b++)
        {
            for (c = 1; c <= entrada; c++)
            {
                if ((a*a) + (b*b) == (c*c))
                {
                    quantidade++;
                    printf("Triangulo %d: (%d  %d  %d)\n", quantidade, a, b, c);
                }
            }
        }
    }
    return quantidade;
}

int main()
{
    int entrada, resultado;
    scanf("%d", &entrada);
    resultado = triangulos(entrada);
    printf("\nExistem um total de %d triangulos pitagoricos de acordo com a entrada.", resultado);
    return 0;
}