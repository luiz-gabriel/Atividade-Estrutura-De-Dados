#include <stdio.h>

/*
 * 2) Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que pode não ser inteira).
 */

void media()
{
    float notas[3] = {},media;
    int i = 1;

    do{
        printf("Digite a %d nota do aluno(a): ", i);
        scanf("%f", &notas[i]);

        i++;
    } while (i <= 3);
    media = (notas[1] + notas[2] + notas[3]) / 3;
    printf("A media foi %.2f", media);
}
