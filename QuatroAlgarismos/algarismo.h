//
// Created by luizg on 31/08/2022.
//
#include <stdio.h>
#include <string.h>

void teste()
{
    char str1[] = "12";
    char str2[] = "30";

    strcat(str1, ":");

    printf("str1 depois de strcat(str1, \":\"):\n%s", str1);

    strcat(str1, str2);

    printf("\nstr1 depois de strcat(str1, str2):\n%s", str1);


}

void algorismo()
{
   // teste();

    int n1 = 0, n2 = 0;

    for (int j = 1000; j <= 9999; ++j) {
        int total = 0;

        n1 = j / 100;
        n2 = j % 100;

        total = n1 + n2;
        if(total * total == j)
        {
            printf(
                    "%i pode ser encontrado assim %i + %i == %i multiplicado por ele mesmo eh %i * %i == %i\n",
                    j, n1, n2, total, total, total, total * total
                    );
        }

    }

    printf("%i * %i == %i", 3337 / 100, 3337 % 100, (3337 / 100) + (3337 / 100) * (3337 / 100) + (3337 / 100));


}




