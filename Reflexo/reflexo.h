/*
 * 27 Fazer um programa para medir os reflexos do usuário. O programa deve:
 * Mostrar a palavra “Agora!” após um tempo aleatório e um número, também aleatório
 * Medir o tempo até que o usuário digite o número pedido e mostrar esse tempo.
 * Dica: usar a função clock da biblioteca time.h (verificar exemplos na internet ou pedir ao professor),
 */

#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// 34
void reflexo()
{
    clock_t start_t, end_t;
    double total_t;
    int i = 0, num = 0;
    printf("Digite o numero que voce ve na tela");
    printf("Agora!");
    start_t = clock();

    printf("%i", rand() % 100);
    scanf("%i", &num);

    end_t = clock();


    printf("Tempo total = %d", end_t - start_t);
}
