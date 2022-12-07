//Questão 1: Faça um programa que leia um número inteiro positivo N e imprima todos os números
//naturais de 0 até N em ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N, i;
    
    printf("Digite um número, por favor: ");
    scanf("%d", &N);
    
    for(i = 0; i <= N; i++){
    	printf("%d", i);
    }
    return 0;
}
