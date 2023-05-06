//
//  Ex05.c
//  Projetos_C
//
//  Created by Leonardo Mota on 05/05/23.
//

#include <stdio.h>

int main (int agrc, char *argv[]){
    int num, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("Os divisores de %d sao: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
