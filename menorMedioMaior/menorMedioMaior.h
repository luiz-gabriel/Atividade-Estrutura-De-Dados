#include <stdio.h>


/*
 * 6) Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior deles, o menor deles e o valor intermediário.
 */

void menorMedioMaior()
{
    float valores[2] = {}, maior, medio, menor;
    int i = 0;

    do{
        printf("Digite o %d valor: ", i);
        scanf("%f", &valores[i]);

        i++;
    } while (i <= 2);

    //medio
    if(valores[0] > valores[1] && valores[0] < valores[2])
    {
        medio = valores[0];
    }

    if(valores[1] > valores[0] && valores[1] < valores[2])
    {
        medio = valores[1];
    }

    if(valores[2] > valores[0] && valores[2] < valores[1])
    {
        medio = valores[2];
    }

    //maior
    if(valores[0] > valores[1] && valores[0] > valores[2])
    {
        maior = valores[0];
    }

    if(valores[1] > valores[0] && valores[1] > valores[2])
    {
        maior = valores[1];
    }

    if(valores[2] > valores[0] && valores[2] > valores[1])
    {
        maior = valores[2];
    }

    //menor

    if(valores[0] < valores[1] && valores[0] < valores[2])
    {
        menor = valores[0];
    }

    if(valores[1] < valores[0] && valores[1] < valores[2])
    {
        menor = valores[1];
    }

    if(valores[2] < valores[0] && valores[2] < valores[1])
    {
        menor = valores[2];
    }

    printf("O numero menor eh %f\n", menor);
    printf("O numero medio eh %f\n", medio);
    printf("O numero maior eh %f\n", maior);
}