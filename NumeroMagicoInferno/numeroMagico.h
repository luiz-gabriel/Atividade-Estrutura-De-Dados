//
// Created by luizg on 30/08/2022.
//

#include <stdio.h>
#include <stdlib.h>

int numeroMagico()
{
    int i = 0, tentativas, number;
    do {
        int num = rand();

        printf("\nDigite um numero: ");
        scanf("%i", &number);

        if(number - num <= 20)
        {
            printf("\nOia como eh inteligente, quase acertou!");
        }

        if(number - num > 20 && number - num <= 59)
        {
            printf("\nTa na media infeliz!");
        }

        if(number - num >= 60)
        {
            printf("\nMais longe que isso so indo a pe pra china!");
        }

        if(number == num){

            if(tentativas > 0 ||tentativas <= 3){
                printf("\nMuito sortudo");
            }

            if(tentativas >= 4 ||tentativas <= 6){
                printf("\nSortudo");
            }

            if(tentativas >= 7 ||tentativas <= 10){
                printf("\nNormal");
            }

            if(tentativas > 10){
                printf("\nContinue tentando\n");
            }
            break;
        }

        tentativas++;
    }while(1);
    return 0;

}