//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>
#include <stdlib.h>


void situacao_aluno(void)
{
    int nota, faltas, horas, carga, Semestre;

    printf("Digite sua media final:");
    scanf("%d", &nota);
    printf("Digite o numero de faltas:");
    scanf("%d", &faltas);
    printf("Digite digite a carga horaria do semestre:");
    scanf("%d", &carga);

    horas = (carga * 180) - (faltas * carga);
    Semestre = (carga * 180) * 0.75;

    if((horas >= Semestre) && (nota >= 60)){
        printf(" -----1-----");
    }
    else{
        printf("-----0-----");
    }

}
