//Questão 14: Elabore um programa que faça a leitura de vários números inteiros até que se digite um
//número negativo. O programa tem de retornar o maior e o menor número lido.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, maior=0, menor;
    
    while(n > -1){
        scanf("%d", &n);
        if(n > maior)
            maior = n;
        else if(n < menor && n > -1)
            menor = n;
    }
    printf("Menor numero lido: %d\n", menor);
    printf("Maior numero lido: %d\n", maior);

    return (0);
}
