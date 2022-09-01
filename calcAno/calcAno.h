/*
 * 11) Escreva um programa para receber do usuário um mês (de 1 a 12) e um ano (de 0 D.C. em diante) e mostrar o número de dias daquele mês daquele ano. Utilizar switch e levar em consideração anos bissextos para o cálculo.
 * // Serve como 47
 * https://escolakids.uol.com.br/matematica/calculo-do-ano-bissexto.htm
 */

#include <stdio.h>
#include <stdlib.h>



void calcBisexto(int mes) {
    switch (mes) {
        case 1:
            printf("Janeiro tem 31 dias");
            break;
        case 2:
            printf("Fevereiro tem 29 dias nos anos bissextos");
            break;
        case 3:
            printf("Marco tem 31 dias");
            break;
        case 4:
            printf("Abril tem 30 dias");
            break;
        case 5:
            printf("Maio tem 31 dias");
            break;
        case 6:
            printf("Junho tem 30 dias");
            break;
        case 7:
            printf("Julho tem 31 dias");
            break;
        case 8:
            printf("Agosto tem 31 dias");
            break;
        case 9:
            printf("Setembro tem 30 dias");
            break;
        case 10:
            printf("Outubro tem 31 dias");
            break;
        case 11:
            printf("novembro tem 30 dias");
            break;
        case 12:
            printf("Dezembro tem 31 dias");
            break;
    }
}
void calcAnoNormal(int mes)
{
    switch (mes) {
        case 1:
            printf("Janeiro tem 31 dias");
            break;
        case 2:
            printf("Fevereiro tem 28 dias nos anos nao bissextos");
            break;
        case 3:
            printf("Marco tem 31 dias");
            break;
        case 4:
            printf("Abril tem 30 dias");
            break;
        case 5:
            printf("Maio tem 31 dias");
            break;
        case 6:
            printf("Junho tem 30 dias");
            break;
        case 7:
            printf("Julho tem 31 dias");
            break;
        case 8:
            printf("Agosto tem 31 dias");
            break;
        case 9:
            printf("Setembro tem 30 dias");
            break;
        case 10:
            printf("Outubro tem 31 dias");
            break;
        case 11:
            printf("novembro tem 30 dias");
            break;
        case 12:
            printf("Dezembro tem 31 dias");
            break;
    }
}
void calcAno()
{
    int ano, mes;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    if(ano % 4 == 0 && ano % 100 != 0 && ano % 400 == 0)
    {
        calcBisexto(mes);
    }else{
        calcAnoNormal(mes);
    }

}



