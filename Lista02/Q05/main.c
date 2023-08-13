#include <stdio.h>

int produtorecursivo(int x1,int x2){
    if (x2 == 0)
        return 0;
    else if (x2 == 1)
        return x1;
    return x1 + produtorecursivo(x1,x2 -1);
}

int main(){
    int x1,x2,res;
    printf("Insira os valores de x1 e x2:\n");
    scanf("%d%d",&x1,&x2);
    res = produtorecursivo(x1,x2);
    printf("%dx%d = %d",x1,x2,res);
    return 0;
}