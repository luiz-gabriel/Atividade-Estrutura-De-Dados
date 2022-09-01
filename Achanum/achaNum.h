#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 31
void achaNum()
{
    int num1 = 0, num2 = 0;
    char number1[100] = {}, number2[100] = {}, n1[100] = {};


    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    sprintf(number1, "%i", num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    sprintf(number2, "%i", num2);

    for (int i = 0; i <= strlen(number1);) {
        if(number1[i] == number2[i])
        {
            n1[i] = number1[i];
        }
        i++;
    }

    puts(n1);
}