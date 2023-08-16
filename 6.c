#include <stdio.h>



int soma(int *pN1, int *pN2){
    return *pN1 + *pN2;
}

int diferenca(int *pN1, int *pN2){
    return *pN1 - *pN2;
}

int multiplicacao(int *pN1, int *pN2){
    return *pN1 * *pN2;
}

int main(){
    int n1;
    int n2;

    printf("Insira o primeiro valor: ");
    scanf("%d", &n1);
    fflush(stdin);

    printf("Insira o segundo valor: ");
    scanf("%d", &n2);
    printf("\n");

    printf("Soma = %d", soma(&n1, &n2));
    printf("\n");
    printf("Diferenca = %d", diferenca(&n1, &n2));
    printf("\n");
    printf("Multiplicacao = %d", multiplicacao(&n1, &n2));

    return 0;
}