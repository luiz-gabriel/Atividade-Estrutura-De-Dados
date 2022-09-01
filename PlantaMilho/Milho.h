//
// Created by luizg on 31/08/2022.
//
//41
#include <stdio.h>
float germina(int milhos){
    int sementes = milhos  * 2;
    int resultado_germinacao = sementes - (sementes * 0.10);

    return resultado_germinacao;

}
void milho()
{
    float toneladas = 0.0000, toneladas_objetivo = 100000.0000;
    int sementes = 150, i = 0;

    while (i < 100)
    {
        float germinacao = germina(sementes);
        if(toneladas > toneladas_objetivo){
            printf("%i",i);
            break;
        }
        toneladas += germinacao / 1000;

        sementes = (int)germinacao;
        i += 1;
    }



}
