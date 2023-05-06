//
//  Ex09.c
//  Projetos_C
//
//  Created by Leonardo Mota on 05/05/23.
//

#include <stdio.h>

int main (int agrc, char *argv[]){
    int opcao, quantidade;
    float total = 0;
    
    do {
        printf("MENU DE FRUTAS\n");
        printf("1 - Abacaxi - R$5,00/unidade\n");
        printf("2 - Maçã - R$1,00/unidade\n");
        printf("3 - Pera - R$4,00/unidade\n");
        printf("0 - Finalizar compra\n");
        
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis: ");
                scanf("%d", &quantidade);
                total += 5.0 * quantidade;
                break;
            case 2:
                printf("Digite a quantidade de maçãs: ");
                scanf("%d", &quantidade);
                total += 1.0 * quantidade;
                break;
            case 3:
                printf("Digite a quantidade de peras: ");
                scanf("%d", &quantidade);
                total += 4.0 * quantidade;
                break;
            case 0:
                printf("Compra finalizada! Total a pagar: R$%.2f\n", total);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);
    
    return 0;
}
