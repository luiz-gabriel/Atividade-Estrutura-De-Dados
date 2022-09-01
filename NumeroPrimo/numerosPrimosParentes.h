//
// Created by luizg on 30/08/2022.
//
//36
/*
 * Funcionando derrota
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ehPrimo(int num)
{
    int divisores = 0;
    int j = 1;

    while(j <= num ) {
        if(num % j == 0)
        {
            divisores+= 1;
        }
        j++;
    }

    if(divisores == 2)
    {
        return 1;
    } else{
        return 0;
    }

}


void primoParente()
{
    int num = 0, primo = 0;

    printf("Digite um numero: ");
    scanf("%i", &num);

    for (int i = 1; i < num; ++i) {
        if(ehPrimo(i) == 1)
        {
            primo = i;
        }

    }

        printf("%i", primo);


}
