//Quuestão 17: Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas
//do chamado triângulo de Floyd:
//1
//2 3
//4 5 6
//8 9 10
//11 12 13 14 15
//16 17 18 19 20 21

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, j, aux = 1;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++, aux++){
            printf("%d ", aux);
        }
            printf("\n");
    }
    
    return (0);
}
