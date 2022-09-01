#include <stdio.h>
#include <stdlib.h>

/*
 * 13 Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se acrescenta nenhum adicional. Acima de 40h e até 60h há um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas horas.
 */

int calcHoras()
{
    float valorHora, juros, horas, salario;

    printf("Digite horas trabalhadas:");
    scanf("%f", &horas);

    printf("Digite o valor da hora");
    scanf("%f", &valorHora);

    juros = (horas * valorHora) * 0.5;
    salario = (horas * valorHora);
    if((horas > 40) && (horas <= 60)){
        printf("%f",juros);


        printf("Reajuste do seu salario de %.2f para: %2.f", salario ,salario + juros);
    }

    else if(horas > 60){



        printf("Reajuste do seu salario de %2.f para: %2.f", salario, salario + juros);
    }
    else{

        printf("Seu salario eh de: %.2f", salario);
    }

}
