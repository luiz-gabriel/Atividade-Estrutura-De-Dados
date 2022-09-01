//
// Created by luizg on 01/09/2022.
//

#include<stdio.h>
#include<conio.h>
int SessentaEQuatro() {

    int numeros[10],par=0,contador=0;

    for(int i=0;i<10;i++){
        printf("Informe um valor inteiro:");
        scanf("%d",&numeros[i]);
    }
    for(int i=0;i<10;i++){
        if(numeros[i]%2==0){
            contador=contador+1;
        }
    }
    printf("O total de numeros pares e:%d",contador);

    return 0;
}
