#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//32 Não funciona
void permutacao()
{
    unsigned int num;
    char nums[10000] = {};


    printf("Digite um numero positivo: ");
    scanf("%i", &num);

    if(!(num > 0)){
        permutacao();
    }

    sprintf(nums, "%i", num);
    puts(nums);
    for (int i = 1; i <= strlen(num);) {

        for (int j = 1; j <= strlen(num); ) {
            nums[i] = nums[j];
            j++;
        }

        i++;

    }


}




