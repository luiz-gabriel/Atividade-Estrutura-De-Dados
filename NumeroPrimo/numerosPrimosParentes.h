//
// Created by luizg on 30/08/2022.
//

/*
 * Código ainda com erro!
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
    int num = 11, k = 0;
    char primosProximos[100000] = {};

    if(ehPrimo(num) == 1)
    {
        for (int i = 1; i < num; ++i) {
            if(ehPrimo(i) == 1)
            {
                while (k < num)
                {
                    primosProximos[k] = i;
                    k++;
                }

            }

        }

        for (int i = 0; i < strlen(primosProximos); i++) {
            printf("%s", primosProximos[i]);
        }
    }else{
        printf("Não é um numero primo");
    }

}
