//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

void mmc()
{
    int a, n1, n2, resto;

    printf("Digite 2 numeros:");
    scanf("%d%d", &n1, &n2);


    for(a=1; a>0; a++){
        resto = (n1*a) % n2;
        if(resto==0) break;
    }
    printf("O MMC dos numeros informados e: %d\n", n1*a);
    system ("pause");
}
