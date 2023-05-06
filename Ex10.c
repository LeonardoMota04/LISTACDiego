//
//  Ex10.c
//  Projetos_C
//
//  Created by Leonardo Mota on 05/05/23.
//

#include <stdio.h>

int main (int agrc, char *argv[]){
    int num, soma = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número inteiro: ", i);
        scanf("%d", &num);
        soma += num;
    }

    float media = (float) soma / 10;
    printf("\nA média dos 10 números digitados é: %.2f", media);

    return 0;
}
