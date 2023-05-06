//
//  Ex03.c
//  Projetos_C
//
//  Created by Leonardo Mota on 05/05/23.
//

#include <stdio.h>

#define PI 3.14159

int main (int agrc, char *argv[]){
    double raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    printf("A area da superficie da esfera de raio %.2lf eh: %.4lf\n", raio, area);
    printf("O volume da esfera de raio %.2lf eh: %.4lf\n", raio, volume);

    return 0;
}

