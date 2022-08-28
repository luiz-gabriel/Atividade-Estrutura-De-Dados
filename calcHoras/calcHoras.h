#include <stdio.h>
#include <stdlib.h>


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
