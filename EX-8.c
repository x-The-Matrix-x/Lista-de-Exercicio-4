//Questão 8: Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, i, soma = 0, val, somatoria;
    float media;
    
    
    for(i = 0; i < 10; i++){
    	printf("Por favor, digite 10 numeros: ");
        scanf("%d", &n);
        soma += n;

    }
    
                media = soma/10;

    printf("A media e: %f", media);
    
    return (0);

}
