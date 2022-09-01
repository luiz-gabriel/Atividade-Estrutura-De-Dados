//
// Created by luizg on 31/08/2022.
// 38
#include <stdio.h>
void idade()
{
    double chico = 1.5, dalton = 1.1;
    for (int i = 1; i <= 98; i++) {
        chico += 0.02;
        dalton += 0.03;
        if(dalton > chico)
        {
            printf("Ze passou o corno do Chico depois de %i anos", i);
            break;
        }
    }
}
