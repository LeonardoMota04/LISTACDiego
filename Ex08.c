//
//  Ex08.c
//  Projetos_C
//
//  Created by Leonardo Mota on 05/05/23.
//

#include <stdio.h>

int main (int agrc, char *argv[]){
    int numero, maior, menor;

    printf("Digite um numero inteiro (negativo para encerrar): ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    while (numero >= 0) {
        printf("Digite um numero inteiro (negativo para encerrar): ");
        scanf("%d", &numero);

        if (numero >= 0) {
            if (numero > maior) {
                maior = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        }
    }

    printf("Maior numero lido: %d\n", maior);
    printf("Menor numero lido: %d\n", menor);

    return 0;
}
