#include <stdio.h>
#include <math.h>


typedef struct{
    double x1;
    double x2;
}Raizes;


double delta(double *pA, double *pB, double*pC){
    return (*pB**pB) - (4**pA**pC);
}


Raizes bhaskara(double *pA, double *pB, double*pC){
    Raizes resultado;

    resultado.x1 = ((*pB - 2 * *pB) + (sqrt(delta(pA,pB,pC)))) / 2 * *pA;
    resultado.x2 = ((*pB - 2 * *pB) - (sqrt(delta(pA,pB,pC)))) / 2 * *pA;

    return resultado;
}



int main(){

    double a = 1;
    double b = -3;
    double c = -54;

    Raizes eq = bhaskara(&a, &b, &c);

    // resultado esperado:
    // https://blog.professorferretto.com.br/wp-content/uploads/2020/03/equacao-do-2-grau-resolvida-4.png

    printf("x' = %lf", eq.x1);
    printf("\n");
    printf("x'' = %lf", eq.x2);

    return 0;
}