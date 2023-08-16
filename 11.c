#include <stdio.h>


void fazerTextoMaiusculo(char *pTexto){
    for(int i = 0; i < 300; i++){

        char *pCurrent = pTexto + i;

        if(*pCurrent >= 97 && *pCurrent <= 122){
            *pCurrent = *pCurrent - 32;
        }
    }
}


int main(){

    char texto[300];

    printf("Insira um texto curto: ");
    gets(texto);

    printf("\n");

    fazerTextoMaiusculo(&texto[0]);

    printf("Texto maiusculo: %s", texto);
}