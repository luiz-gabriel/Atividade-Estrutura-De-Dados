//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>

int NoventaENove()
{
    int matriz[4][4], contar = 0;

    for(int linha=0; linha<4; linha++)
    {
        for(int coluna=0; coluna<4; coluna++)
        {
            printf("%dª linha, %dª coluna = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(int linha=0; linha<4; linha++)
        for(int coluna=0; coluna<4; coluna++)
            if(matriz[linha][coluna] > 10)
                contar++;


    printf("\n\n Existem na matriz %d números maiores que 10.", contar);

    return 0;
}
