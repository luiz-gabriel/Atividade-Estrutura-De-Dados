//
// Created by luizg on 01/09/2022.
//

#include <stdio.h>


int SetentaESeis(){


    int array[10];


    for (int i=0;i<40;i++){


        printf("ADD[%d]:: ",i+1); scanf("%d",&array[i]);

    }


    for (int a=0;a<40;a++){


        if (array[a]<0){


            array[0]=0;


        }


    }


    for (int q=0;q<40;q++){


        printf("%d\n",array[q]);

    }


    return 0;


}
