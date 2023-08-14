#include <stdio.h>


typedef struct{
    char nome[50];
    int idade;
    float altura;
    float peso;
    char sexo;
}Pessoa;


Pessoa criarPessoa(){

    Pessoa pessoa;

    printf("Insira o nome da pessoa: ");
    gets(pessoa.nome);
  

    printf("Insira a idade da pessoa: ");
    scanf("%d", &pessoa.idade);
   

    printf("Insira a altura da pessoa (metros): ");
    scanf("%f", &pessoa.altura);
  

    printf("Insira o peso da pessoa (kg): ");
    scanf("%f", &pessoa.peso);


    printf("Insira o sexo da pessoa (M, F, O): ");
    scanf("%s", &pessoa.sexo);
  

    return pessoa;
}

void mostrarPessoa(Pessoa *pessoa){

    printf("\n");
    printf("Nome: %s", pessoa->nome);
    printf("\n");
    printf("Idade: %d anos", pessoa->idade);
    printf("\n");
    printf("Altura: %.2f m.", pessoa->altura);
    printf("\n");
    printf("Peso: %.2f kg.", pessoa->peso);
    printf("\n");
    printf("Sexo: %c", pessoa->sexo);
}


int main(){

    Pessoa pessoa = criarPessoa();

    mostrarPessoa(&pessoa);

    return 0;
}