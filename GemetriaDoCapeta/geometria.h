#include <stdio.h>
/*
 * 16 Faça um programa que receba do usuário o número de lados e o tamanho dos lados de um polígono regular e imprima o valor da área do polígono. O programa deve utilizar uma estrutura switch-case para decidir que fórmula de cálculo utilizar, de acordo com o número de lados do polígono. Se o número de lados for diferente de 3, 4 ou 6, o programa deve informar: “não sei calcular a área”. Áreas:
 */
void geo()
{
    int lados, i = 0;
    float tamanhoLados[6] = {};
    printf("Digite o numero de lados: ");
    scanf("%i", &lados);

    switch (lados) {
        case 3:
            do {
                printf("Digite o tamanho do %i lado: ", i+1);
                scanf("%f", &tamanhoLados[i]);
                i += 1;
            } while (i <= 1);
            printf("A area do triangulo eh %.2f", (tamanhoLados[0] *  tamanhoLados[1] * 1.73) / 4);
            break;
        case 4:
            do {
                printf("Digite o tamanho do %i lado: ", i+1);
                scanf("%f", &tamanhoLados[i]);
                i += 1;
            } while (i <= 1);

            printf("A area do quadrado eh %.2f", tamanhoLados[0] * tamanhoLados[1]);
            break;
        case 6:
            do {
                printf("Digite o tamanho do %.2f lado: ", i+1);
                scanf("%f", &tamanhoLados[i]);
                i += 1;
            } while (i <= 1);
            printf("A area do triangulo eh %.2f", (6 * tamanhoLados[0] *  tamanhoLados[1] * 1.73) / 4);
            break;
        default:
            printf("Nao sei calcular");
            break;
    }
}