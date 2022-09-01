//
// Created by luizg on 31/08/2022.
// 17
//
#include <stdio.h>
void multiplos()
{
    int num1 = 0, num2 = 0;

    printf("Digite o primeiro numero");
    scanf("%i", &num1);

    printf("Digite o segundo numero");
    scanf("%i", &num2);

    printf("================================= Numero 1 =================================");
    for (int i = 1; i < num1; ) {
        i++;

        for (int j = 0; j < num1; ) {
            if(i * j == num1)
            {
                printf("%i e %i = %i\n", i, j, i * j);
            }

        j++;
        }
    }
    printf("================================= Numero 2 =================================");
    for (int k = 1; k < num2; k++) {

        for (int r = 0; r < num2; r++) {
            if(k * r == num2)
            {
                printf("%i e %i = %i\n", k, r, k * r);
            }
        }
    }
}