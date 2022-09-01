#include <stdlib.h>
#include <stdio.h>

/*
 * 14) (Cortesia do Prof. Bogdan Tomoyuki Nassu) Zeca está organizando um bolão de futebol. Segundo suas regras, os apostadores informam o placar do jogo e ganham 10 pontos se acertarem o vencedor ou se acertarem que foi empate,
 * e ganham mais 5 pontos para o placar de cada time que acertarem. A tabela a seguir dá um exemplo, considerando que o placar real foi 3x2:
 */
void bolao()
{

    int pontos = 0, timeUm,JogadorResult,JogoResult, timeDois, placarTimeUm, placarTimeDois;

    printf("Digite o numero de gols do time Um : ");
    scanf("%i", &timeUm);

    printf("\nDigite o numero de gols do time Dois: ");
    scanf("%i", &timeDois);

    printf("\n\nDigite o placar de gols do time Um : ");
    scanf("%i", &placarTimeUm);

    printf("\nDigite o placar de gols do time Dois: ");
    scanf("%i", &placarTimeDois);

    if(timeUm > timeDois){
        JogadorResult = 1;
    }else if(timeDois > timeUm){
        JogadorResult = 2;
    }else{
        JogadorResult = 0;
    }

    if(placarTimeUm > placarTimeDois){
        JogoResult = 1;
    }else if(timeDois > timeUm){
        JogoResult = 2;
    }else{
        JogoResult = 0;
    }
    //Verifica time vecendor
    if(JogoResult == JogadorResult){
        pontos += 10;
    }



    if(timeUm == placarTimeUm)
    {
        pontos += 5;
    }

    if(timeDois == placarTimeDois)
    {
        pontos += 5;
    }

    printf("Voce fez %i pontos", pontos);
}