//
//  Ex07.c
//  Projetos_C
//
//  Created by Leonardo Mota on 05/05/23.
//

#include <stdio.h>

int main (int agrc, char *argv[]){
    int n, i, t1 = 0, t2 = 1, proximoTermo = 0;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    // Se n for igual a 0, imprime o primeiro termo da sequência (0)
    if (n == 0) {
        printf("%d", t1);
    }
    // Se n for igual a 1, imprime o segundo termo da sequência (1)
    else if (n == 1) {
        printf("%d", t2);
    }
    else {
        // Laço for para calcular os próximos termos da sequência
        for (i = 2; i <= n; i++) {
            proximoTermo = t1 + t2;
            t1 = t2;
            t2 = proximoTermo;
        }
        printf("%d", proximoTermo);
    }

    return 0;
}
