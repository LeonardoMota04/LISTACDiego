//
//  Ex06.c
//  Projetos_C
//
//  Created by Leonardo Mota on 05/05/23.
//

#include <stdio.h>
#include <stdlib.h>


int main (int agrc, char *argv[]){
    
    int i, soma = 0;
    
    for (i = 1; i < 1000; i++) {
            if (i % 3 == 0 || i % 5 == 0) {
                soma += i;
            }
        }

        printf("A soma dos multiplos de 3 e 5 abaixo de 1000 eh: %d", soma);

    return 0;
}
