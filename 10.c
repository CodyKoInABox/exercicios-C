#include <stdio.h>

void fazerPrimeiraLetraMaiuscula(char *pNome){

    *pNome = *pNome - 32;

}

int main(){

    char nome[50];

    printf("Insira um nome (em letras minusculas): ");
    gets(nome);
    printf("\n");

    fazerPrimeiraLetraMaiuscula(&nome[0]);

    printf("Nome com inicial maiuscula: %s", nome);
}