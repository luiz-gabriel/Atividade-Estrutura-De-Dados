//Mateus

#include <stdio.h>

#include <stdlib.h>

int main(){

    int num[10], count = 0, soma = 0;

    printf("Informe 10 numeros reais:\n");

    for(int i = 0; i < 10; i++){

        printf("[%i]: ", i+1);

        scanf("%d", &num[i]);

        if(num[i] < 0){

            count++;

        }

        if(num[i] > 0){

            soma = soma + num[i];

        }

    }

    printf("\n\n%d numeros negativos.\nSoma dos numeros positivos = %d.\n", count, soma);

    return 0;

}
