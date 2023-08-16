#include <stdio.h>

int fatorial(int *pN){
    if(*pN >= 1){
        int aux = *pN - 1;
        return *pN * fatorial(&aux);
    }else{
        return 1;
    }
}

int main(){

    int numero;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    printf("Fatorial de %d = %d", numero, fatorial(&numero));

    return 0;
}