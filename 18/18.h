//
// Created by luizg on 01/09/2022.
//

//18
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero, f1=0, f2=1, f3;

    printf("Digite o numero de senquencias:");
    scanf("%d", &numero);

    if (numero <= 0){
        printf("Numero invalido");
    }
    else{
        printf("0-1");
    }

    while(f2 < numero){
        f3 = f2 + f1;
        printf("-%d", f3);
        f1 = f2;
        f2 = f3;
    }

    printf("\n");
    system("pause");
    return 0;


}
