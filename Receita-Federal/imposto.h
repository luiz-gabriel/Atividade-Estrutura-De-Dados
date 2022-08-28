#include <stdio.h>

/*
 * 15) A base de cálculo é dada pelo salário mensal, com certas deduções, como dependentes e contribuição previdenciária. Abstraindo estes e outros detalhes, o imposto devido é calculado tomando a base de cálculo mensal, verificando a faixa na qual ela se encontra, aplicando a alíquota correspondente, e reduzindo o valor final da parcela a deduzir. Por exemplo, se a base de cálculo é de R$10.000,00, a alíquota é de 27,5%, ou seja, R$2750,00. Deduzimos R$756,53 da parcela e obtemos como resultado final R$1993,47 de imposto devido.
 * Escreva um programa que receba como entrada a base de cálculo mensal de um trabalhador e retorne o imposto de renda devido.
 */

void imposto()
{
    float base;
    printf("Exemplo: Digite 1620.16 em vez de 1.620.16\nDigite a base de calculo: ");
    scanf("%f", &base);

    if(base > 1637.11 && base <= 2453.50){
        printf("%.2f", base * 0.075 - 122.78);
    }

    if(base > 2453.51 && base <= 3271.38){
        printf("Imposto devido %.2f", base * 0.15 - 306.80);
    }

    if(base > 3271.38 && base <= 4087.65){
        printf("Imposto devido %.2f", base * 0.15 - 306.80);
    }

    if(base > 4087.65){
        printf("Imposto devido %.2f", base * 0.275 - 756.53);
    }

}