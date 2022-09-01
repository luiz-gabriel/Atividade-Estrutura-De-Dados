#include <stdio.h>
// 26
void idadeVeia()
{
    int a = 0, b = 0, i = 0, j = 0;

    while (j < 1)
    {
        i += 1;
        a = i * 2;
        b = i;
        printf("\n%i", a + b);
        if(a + b == 81)
        {
            i = a + b;
            printf("\n\nCondição atendida.A = %i | B = %i | Idade = %i", a, b, a + b);
            break;
        }
    }
}