//Mateus

#include <stdio.h>
#include <stdlib.h>
int main() {
    int valor[5],i,maior,menor,maiorPosicao,menorPosicao;
    for(i=0; i<5; i++) {
        printf(" Entre com um numero: ");
        scanf("%d",&valor[i]);
        if(i == 0) {
            maior = valor[i];
            menor = valor[i];
            maiorPosicao = i;
            menorPosicao = i;
        }
        if(valor[i] > maior) {
            maior = valor[i];
            maiorPosicao = i;
        }
        if(valor[i] < menor) {
            menor = valor[i]; //e aqui afaltou um ;
            menorPosicao = i;
        }
    }
    printf("\n Maior valor: %d  Posicao %d",maior,maiorPosicao);
    printf("\n Menor valor: %d  Posicao %d",menor,menorPosicao);
    system("pause");
}
