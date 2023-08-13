#include <stdio.h>
#include <stdlib.h>

int f(int m, int n)
{
    if (n == 1)
        return m + 1;
    else if (m == 1)
        return n + 1;
    else if (n>1 && m>1)
        return f(m,n-1) + f(m-1,n);
    else{
        printf("entrada invalida!\n");
        exit(1);
    }
}

int main()
{
    int m, n, res;
    printf("Insira os valores de m e n:\n");
    scanf("%d%d", &m, &n);
    res = f(m, n);
    printf("f(%d,%d) = %d\n", m, n, res);
}
