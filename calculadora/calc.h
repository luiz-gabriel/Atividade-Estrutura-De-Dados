#include <stdio.h>



/*
 * 7 Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. O programa deve retornar o resultado da operação recebida sobre estes dois números.
 */

void calculate(){
    char op;
    float n1, n2;
    printf("Digite a operacao desejada: ");
    scanf("%c",&op);

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &n1);

    printf("\nDigite o segundo numero: ");
    scanf("%f", &n2);

    switch (op) {
        case '+':
            printf("o resutado da soma entre %.2f e %.2f eh %.2f", n1,n2,n1+n2);
        break;

        case '-':
            printf("o resutado da subtracao entre %.2f e %.2f eh %.2f", n1,n2,n1-n2);
        break;

        case '*':
            printf("o resutado da multiplicao entre %.2f e %.2f eh %.2f", n1,n2,n1*n2);
        break;

        case '/':
            printf("o resutado da divisao entre %.2f e %.2f eh %.2f", n1,n2,n1/n2);
        break;
    }
}


