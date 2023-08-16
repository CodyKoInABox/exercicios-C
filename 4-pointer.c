// exercicio 4 usando pointeiros para x' e x''

#include <stdio.h>
#include <math.h>


double delta(double *pA, double *pB, double*pC){
    return (*pB**pB) - (4**pA**pC);
}


void bhaskara(double *pA, double *pB, double *pC, double *x1, double *x2){

    *x1 = ((*pB - 2 * *pB) + (sqrt(delta(pA,pB,pC)))) / 2 * *pA;
    *x2 = ((*pB - 2 * *pB) - (sqrt(delta(pA,pB,pC)))) / 2 * *pA;

}


int main(){

    double x1;
    double x2;

    double a = 1;
    double b = -3;
    double c = -54;

    bhaskara(&a, &b, &c, &x1, &x2);

    // resultado esperado:
    // https://blog.professorferretto.com.br/wp-content/uploads/2020/03/equacao-do-2-grau-resolvida-4.png

    printf("x' = %lf", x1);
    printf("\n");
    printf("x'' = %lf", x2);

    return 0;
}