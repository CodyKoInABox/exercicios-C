#include <stdio.h>

typedef struct{
    int codigo;
    char nome[50];
    char cor[50];
    float peso;
    double preco;
}Peca;

Peca criarPeca(){
    Peca peca;

    printf("Insira o codigo da peca: ");
    scanf("%d", &peca.codigo);
    fflush(stdin);

    printf("Insira o nome da peca: ");
    gets(peca.nome);

    printf("Insira a cor da peca: ");
    gets(peca.cor);

    printf("Insira o peso da peca (kg): ");
    scanf("%f", &peca.peso);

    printf("Insira o preco da peca (R$): ");
    scanf("%lf", &peca.preco);

    return peca;
}

void mostrarPeca(Peca *peca){

    printf("\n");
    printf("Codigo: %d", peca->codigo);
    printf("\n");
    printf("Nome: %s", peca->nome);
    printf("\n");
    printf("Cor: %s", peca->cor);
    printf("\n");
    printf("Peso: %.3f kg.", peca->peso);
    printf("\n");
    printf("Preco: R$ %.2lf", peca->preco);
}

int main(){

    Peca peca = criarPeca();

    mostrarPeca(&peca);

    return 0;
}