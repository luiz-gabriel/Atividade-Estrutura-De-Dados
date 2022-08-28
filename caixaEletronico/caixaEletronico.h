#include <stdio.h>
#include <stdlib.h>
//Hugo
int caixa()
{
    int valor, Ncem, Ncinquenta, Ndez, Ncinco, Num, Ndois;
    printf("Digite um valor para saque");
    scanf("%d", &valor);

    Ncem = valor / 100;
    printf("Digite o valor:");
    valor = valor - (Ncem * 100);

    Ncinquenta = valor / 50;
    valor = valor - (Ncinquenta * 50);

    Ndez = valor / 10;
    valor = valor - (Ndez * 10);

    Ncinco = valor / 5;
    valor = valor - (Ncinco * 5);

    Ndois = valor / 2;
    valor = valor - (Ndois * 5);

    Num = valor;


    printf ("Notas de 100:%d\n",Ncem);
    printf ("Notas de 50:%d\n",Ncinquenta);
    printf ("Notas de 10:%d\n",Ndez);
    printf ("Notas de 5:%d\n",Ncinco);
    printf("Notas de 2:%d\n",Ndois);
    printf ("Notas de 1:%d\n",Num);

}
