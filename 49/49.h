//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>
#include <math.h>
int arredonda ()
{
    float doubloX;

    printf("Digite o numero flutuante:");
    scanf("%f", &doubloX);

    if (doubloX > 0){
        printf("%f", ceil(doubloX));

    }
    else if (doubloX < 0){
        printf("-%f", ceil(-doubloX));
    }
    else{
        printf("O numero nao pode ser arredondado");
    }
}


