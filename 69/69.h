//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>
void MeiaNove(){

    int notas[15], i,total=0, media;

    printf("Digite as notas 15:");
    scanf("%d", &notas[15]);

    for(i=0;i<15;i++){

        scanf("%d", &notas[i]);

    }

    for(i=0;i<15;i++){

        total = total + notas[i];

    }

    media = (total/15);

    printf("A media geral e: %d", media);


}

