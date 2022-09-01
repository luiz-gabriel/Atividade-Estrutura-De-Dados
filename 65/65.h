//
// Created by luizg on 01/09/2022.
//

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int SessentaEcinco () {
    int C[10], i=0, menor, maior;
    menor= INT_MAX;
    maior= INT_MIN;

    for(i; i<10; i++){
        printf("escreva um numero:");
        scanf("%d", &C[i]);
        if(menor>C[i]){
            menor= C[i];
        }
        if(maior<C[i]){
            maior=C[i];
        }
    }
    printf("o menor e: %d\n", menor);
    printf("o maior e: %d\n", maior);

    system("pause");
    return 0;
}
