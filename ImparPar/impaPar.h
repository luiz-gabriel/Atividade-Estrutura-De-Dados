#include <stdio.h>

/*
 * 4) Fazer um programa para ler um número do usuário e determinar se este número é par ou não par.
 */

void parImpar(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d eh um numero par", num);
    }else{
        printf("%d eh um numero impar",num);
    }
}
