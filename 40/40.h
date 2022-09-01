//
// Created by luizg on 01/09/2022.
//
#include <stdio.h>
#include <stdlib.h>
//40
void piui ()
{
    int Segundos = 0, Velocidade0 = 2;

    while(Segundos < 10){

        Velocidade0 = Velocidade0 * 2;
        Segundos += 1;

        printf("Segundos:%d\n Velocidade:%d\n", Segundos, Velocidade0);


    }
}
