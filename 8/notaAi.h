//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

/*
 * Fazer um programa que recebe duas notas parciais de um aluno (0 a 100) e informa se ele está aprovado (média maior ou igual a 70), em exame final (média entre 40 e 69) ou reprovado (média menor do que 40). Caso esteja em exame o programa deve pedir a nota do exame (0 a 100) e informar se o aluno está aprovado (média mais nota do exame maior ou igual a 100) ou reprovado (média mais nota do exame menor do que 100).
 */

void nota()
{
    float n1, n2, media, n3, media2;

    printf("Digite a primeira e segunda nota:");
    scanf("%f%f", &n1,&n2);


    media = n1 + n2;

    if(media >= 70){
        printf("Aprovado!");}

    else if((media <= 69) || (media >= 40)){
        printf("Em exame final\n");
        printf("Digite a nota do exame final:");
        scanf("%f", &n3);

        media2 = media + n3;

        if(media2 >= 100){
            printf("Aprovado");
        }
        else{
            printf("Reprovado");
        }
    }


    else{
        printf("reprovado");
    }
}

