#include <stdio.h>

void calcularArea(double *pRaio, double *pArea){{
    *pArea = 3.141592 * *pRaio * *pRaio;
}}


int main(){

    double area;
    
    double raio = 5;

    calcularArea(&raio, &area);

    printf("Raio = %.2lf", raio);
    printf("\n");
    printf("Area = %.2lf", area);

    return 0;
}