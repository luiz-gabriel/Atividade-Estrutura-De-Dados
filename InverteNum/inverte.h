//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>
#include <string.h>

void inverte()
{
    unsigned int num = 0;
    int i = 0;
    char numbers[100000] = {}, numbersInvertido[100000] = {};
    printf("Digite um numero: ");
    scanf("%i", &num);

    sprintf(numbers, "%i", num);


        for (int j = strlen(numbers) - 1; j >= 0;) {
                numbersInvertido[i] = numbers[j];
                i++;
            j--;
        }


    printf("O numero invertido eh: ");
    puts(numbersInvertido);
}
