//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

int lerSeis()

{
    int vetor[6]={}, i;

    for(i=0; i<6; i++){
        printf(" Entre com um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (int x=0; x<=5; x+=1){
        printf("%d\n", vetor[x]);
    }
}

