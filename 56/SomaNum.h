//
// Created by luizg on 01/09/2022.
//

/*
 * 56 Escreva uma função recursiva que calcule a soma dos dígitos de um número inteiro. Por exemplo, se a entrada for 123, a saída deverá ser 1+2+3 = 6.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int soma_digitos (int num)
{
    int a,b;

//Atribuição do valor do ultimo digito do número à variável “a”.
    a = num % 10;

//Remoção o ultimo dígito do número “num” e atribui o novo valor para “b”
    b = (num - a)/10;

//Testa se o número ainda tem mais algum dígito ou não. Se não tiver, então é retornado só o valor do próprio dígito.
    if (b <= 0)
    {
        return a;
    }
    else
    {
// Se tiver mais algum dígito. Soma o valor do último número ao próximo ultimo número.
        return a + soma_digitos(b);
    }
}

void somaMizera()
{

    int n, soma;

    printf("Informe o número: ");
    scanf("%i", &n);

    soma = soma_digitos(n);

    printf("A soma dos digitos eh: %i", soma);


    system("pause");

}