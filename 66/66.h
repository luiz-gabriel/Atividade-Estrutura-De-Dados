//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vet[5];
    int i;

    for (i=0; i<5; i++){
        printf("Digite o valor do elemento %d:\n", i);
        scanf("%d", &vet[i]);
    }
    int maior = vet[0];
    int posMaior = 0;
    printf("\nO vetor eh: %d", vet[0]);
    for (i=1; i<5; i++){
        printf("%d", vet[i]);
        if(vet[i] > maior){
            maior = vet[i];
            posMaior = i;
        }
    }

    printf("\nO maior elemento eh: %d, localizado na posicao: %d (indice %d). \n", maior, posMaior+1, posMaior);
    system("pause");

    return 0;

}
