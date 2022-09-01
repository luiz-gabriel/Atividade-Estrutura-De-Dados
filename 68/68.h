//
// Created by luizg on 01/09/2022.
// 68

#include <stdio.h>
#include <stdlib.h>

void SessentaEsei()
{
    int i, num[6];
    printf("Digite 6 numeros inteiros.\n");

    for(i=0; i<6; i++) {
        printf("Digite o %d valor: ", (i+1));
        scanf("%d", &num[i]);
    }

    printf("Resultado:\n");
    for(i=5; i>=0; i--) {
        printf("%d\n", num[i]);
    }

}
