//
// Created by luizg on 01/09/2022.
//


#include <stdio.h>

int SessentaEDois(){

    int i;

    float qtdNum[10], numQuad[10];



    printf("Digite 10 numeros que serão feitos o quadrado: \n");

    for(i=0; i<10;i++){

        scanf("%f",&qtdNum[i]);

    }

    for(i=0; i<=9; i++){ //cálculo do quadrado do número

        numQuad[i] = qtdNum[i] * qtdNum[i];

    }

    printf("\nNumeros digitados:");

    for(i=0; i<=9; i++){ // aqui mostra seus números digitados

        printf("%f ",qtdNum[i]);

    }

    printf("\nNumeros quadrados: ");

    for(i=0; i<=9; i++){//aqui mostra o quadrado dos números

        printf("%f ",numQuad[i]);

    }

    return 0;

}
