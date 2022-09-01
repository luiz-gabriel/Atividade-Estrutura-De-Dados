//
// Mariana Araújo
//

/*
 * 3) Fazer um programa para calcular uma trajetória parabólica. O programa deve:
 *
 * Receber do usuário a altura relativa ao solo de onde o projétil é lançado, a velocidade inicial em m/s e o ângulo de lançamento
 * Calcular e mostrar a quantos metros de distância o projétil atingirá o chão, considerando aceleração da gravidade igual a 9,81 m/s2.
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float alturaInic, velocidadeInic, angulo, gravidade, distanciaFinal,tempo,delta;

    printf("Escreva a altura de lançamento: ");

    scanf("%f",&alturaInic);

    printf("\nEscreva a velocidade de inicial: ");

    scanf("%f",&velocidadeInic);

    printf("\nEscreva o angulo de lançamento: ");

    scanf("%f",&angulo);

    gravidade = 9.81;
    delta = pow(velocidadeInic,2)*pow(sin(angulo),2)+2*gravidade*alturaInic;
    distanciaFinal = ((velocidadeInic*cos(angulo))*(velocidadeInic*sin(angulo)*sqrt(delta)))/gravidade;

    printf("\nO projétil atingirá o chão a %.2f metros",distanciaFinal);


    return 0;
}
