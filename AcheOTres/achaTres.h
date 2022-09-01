#include <stdio.h>
#include <string.h>
// 30

void acha()
{
    char num[100] = {};
    int number;
    printf("Digite um numero");
    scanf("%d", &number);

    sprintf(num, "%d", number);


    for (int i = 0; i <= strlen(num); ++i) {
        if(num[i] == '3'){
            printf("Encontrei o 3 na posicao %i\n", i);

        }else{
            printf("Deu ruim\n");

        }
    }
}