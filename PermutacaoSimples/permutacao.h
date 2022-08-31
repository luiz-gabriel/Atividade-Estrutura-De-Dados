#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
void permutacao()
{

    unsigned int num;
    int i = 0, j = 0, k = 0;
    char number[100000] = {}, n[100000] = {};


    printf("Digite um numero: ");
    scanf("%u", &num);

    sprintf(number, "%u", num);

    int tamanho = strlen(number);

    while (i <= tamanho)
    {
        if(tamanho - j > 0){
            n[i] = tamanho - j;
            break;
        }else{
            break;
        }
        j+= 1;
        i+= 1;
    }

    int mult = 1;
    while (k < strlen(n)){
        mult = mult * n[k];
        k++;
    }

    printf("%i",mult);

}
     */

    typedef char * string;

    void troca_char(string str, int p1, int p2)
    {
        char tmp;
        tmp = str[p1];
        str[p1] = str[p2];
        str[p2] = tmp;
    }

    void permutacao(string str, int k)
    {
        int i, len;
        len = strlen(str);

        if (k == len)
            printf( "%s\n", str);
        else
        {
            for (i = k; i < len; i++)
            {
                troca_char(str, k, i);
                permutacao(str, k + 1);
                troca_char(str, i, k);
            }
        }
    }

    void lista_permutacoes(string str)
    {
        permutacao(str, 0);
    }





