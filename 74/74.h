//
// Mateus
//

#include <stdio.h>
#include <stdbool.h>
#define TAM  20

int SetentaEQuatro() {

    int vet[TAM], i,j;
    bool rept;


    for (i=0; i<TAM; i++) {
        printf("Digite o %do valor: ", i+1);
        scanf("%d", &vet[i]);
    }

    for (i=0; i<TAM; i++) {
        rept = false;
        for (j = 0; j < i; j++) {
            if (vet[i] == vet[j]) {
                rept = true;
                break;
            }
        }
        if (!rept) {
            printf("%d ", vet[i]);
        }
    }

    return 0;
}
