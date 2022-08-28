#include <stdio.h>

/*
 * 1
 *  Fazer um programa para
 *  receber do usuário um tempo em segundos, correspondente à duração de um evento qualquer (por ex. jogo de futebol)
 *  calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos

 */

void hora(){
    int time, h, m, s;
    printf("Escreva um tempo em segundos: ");
    scanf("%d", &time);

    h = time / 3600;
    m = (time % 3600) / 60;
    s = (time % 3600) % 60;

    printf("O tempo total foi %d:%d:%d", h, m, s);

}

