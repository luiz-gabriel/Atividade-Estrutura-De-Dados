//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>
#include <stdlib.h>

void multa()
{
    int velocidadeA, velocidadeC, diferenca;

    printf("Digite a velocidade da avenida:");
    scanf("%d", &velocidadeA);
    printf("Digite a velocidade do carro:");
    scanf("%d",&velocidadeC);

    diferenca = velocidadeC - velocidadeA;

    if(velocidadeC > velocidadeA){
        printf("Voce atingiu o limite de velocidade a multa e de %d", diferenca*5 );
    }
    else{
        printf("Nao ha multa");
    }
}
