//
// Created by Hugo, updates luiz on 01/09/2022.
//
#include <stdio.h>
#include <stdlib.h>
void vetor()
{

    int A[] = { 1,0,5,-2,-5,7 };
    int i, t;

    t = A[0] + A[1] + A[5];

    printf("A soma dos vetores eh %i\n", t);

    printf("%d %d %d\n------------------------\n", A[0], A[1], A[5]);
    A[4] = 100;

    for (i=0; i<=5; i++){
        printf("%d\n", A[i]);

    }


}