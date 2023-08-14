#include <stdio.h>

typedef struct{
    char raca[50];
    char cor[50];
    float peso;
    char sexo;
}Animal;


Animal criarAnimal(){

    Animal animal;

    printf("Insira a raca do animal: ");
    gets(animal.raca);

    printf("Insira a cor do animal: ");
    gets(animal.cor);

    printf("Insira o peso do animal (kg): ");
    scanf("%f", &animal.peso);

    printf("Insira o sexo do animal (M, F): ");
    scanf("%s", &animal.sexo);

    return animal;
}

void mostrarAnimal(Animal *animal){

    printf("\n");
    printf("Raca: %s", animal->raca);
    printf("\n");
    printf("Cor: %s", animal->cor);
    printf("\n");
    printf("Peso: %.2f kg.", animal->peso);
    printf("\n");
    printf("Sexo: %c", animal->sexo);
}

int main(){

    Animal animal = criarAnimal();

    mostrarAnimal(&animal);

    return 0;
}