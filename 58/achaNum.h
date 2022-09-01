//
// Created by luizg on 01/09/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void achaDerrota()
{
    char num[90000] = {}, np[100] = {};
    int number, n, total = 0;
    printf("Digite um numero para pesquisar: ");
    scanf("%d", &number);
    printf("Digite o numero que voce quer encontrar: ");
    scanf("%i", &n);

    sprintf(num, "%i", number);
    sprintf(np, "%i", n);

    for (int i = 0; i <= strlen(num); ++i) {
        if(num[i] == np[0]){
            total += 1;
        }
    }

    if(total > 0)
    {
        printf("Encontramos %i vezes o numero %i no total", total, n);
    }else{
        printf("Nada foi encontrado");
    }
}
