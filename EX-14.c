//Quest�o 14: Elabore um programa que fa�a a leitura de v�rios n�meros inteiros at� que se digite um
//n�mero negativo. O programa tem de retornar o maior e o menor n�mero lido.

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
