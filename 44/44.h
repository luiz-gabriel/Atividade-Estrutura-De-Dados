//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>
#include <math.h>
float RAIZQUADRADA(int numero){
    float result;
    result=pow(numero,0.5);
    return result;
}
int raiz (){
    float result,numero;
    printf ("Entre com o valor para saber sua raiz quadrada: ");
    scanf ("%f", &numero);
    result=RAIZQUADRADA(numero);
    printf ("O valor da raiz quadrada e: %.2f",result);
    getchar ();
    getchar ();
    return 0;
}

