#include <stdio.h>

/*
 * 1
 *  Fazer um programa para
 *  receber do usuário um tempo em segundos, correspondente à duração de um evento qualquer (por ex. jogo de futebol)
 *  calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos

 */

void hora(){
    int time, h, m, s;
    printf("Escreva um tempo em segundos: ");
    scanf("%d", &time);

    h = time / 3600;
    m = (time % 3600) / 60;
    s = (time % 3600) % 60;

    printf("O tempo total foi %d:%d:%d", h, m, s);

}

/*
 * 2) Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que pode não ser inteira).
 */

void media()
{
    float notas[3] = {},media;
    int i = 1;

    do{
        printf("Digite a %d nota do aluno(a): ", i);
        scanf("%f", &notas[i]);

        i++;
    } while (i <= 3);
    media = (notas[1] + notas[2] + notas[3]) / 3;
    printf("A media foi %.2f", media);
}


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

/*
 * 6) Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior deles, o menor deles e o valor intermediário.
 */

void menorMedioMaior()
{
    float valores[2] = {}, maior, medio, menor;
    int i = 0;

    do{
        printf("Digite o %d valor: ", i);
        scanf("%f", &valores[i]);

        i++;
    } while (i <= 2);

    //medio
    if(valores[0] > valores[1] && valores[0] < valores[2])
    {
        medio = valores[0];
    }

    if(valores[1] > valores[0] && valores[1] < valores[2])
    {
        medio = valores[1];
    }

    if(valores[2] > valores[0] && valores[2] < valores[1])
    {
        medio = valores[2];
    }

    //maior
    if(valores[0] > valores[1] && valores[0] > valores[2])
    {
        maior = valores[0];
    }

    if(valores[1] > valores[0] && valores[1] > valores[2])
    {
        maior = valores[1];
    }

    if(valores[2] > valores[0] && valores[2] > valores[1])
    {
        maior = valores[2];
    }

    //menor

    if(valores[0] < valores[1] && valores[0] < valores[2])
    {
        menor = valores[0];
    }

    if(valores[1] < valores[0] && valores[1] < valores[2])
    {
        menor = valores[1];
    }

    if(valores[2] < valores[0] && valores[2] < valores[1])
    {
        menor = valores[2];
    }

    printf("O numero menor eh %f\n", menor);
    printf("O numero medio eh %f\n", medio);
    printf("O numero maior eh %f\n", maior);
}

void main(){
    menorMedioMaior();
}