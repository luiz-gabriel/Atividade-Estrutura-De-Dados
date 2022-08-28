#include <stdio.h>


/*
 * 5) Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se estes valores podem formar os lados de um triângulo. Em caso afirmativo, informar se o triângulo é equilátero, isósceles ou escaleno.
 */

void triangulo(){
    int a,b,c;
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if(a + b > c || b + c > a || c + b > a)
    {
        //Equilatero
        if(a == b && a == c && b == c)
        {
            printf("Eh um triangulo equilátero");
        }

        //Isósceles
        if(a == b && b != c || c == b && a != c || b == c && a != b)
        {
            printf("Eh um triangulo Isosceles");
        }

        //Escaleno
        if(a != b && a != c && b != c)
        {
            printf("Eh um triangulo Escaleno");
        }

    }else{
        printf("Nao eh um triangulo");
    }
}